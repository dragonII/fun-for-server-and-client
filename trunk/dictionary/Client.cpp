#include <Ice/Ice.h>
#include <Dict.h>

using namespace std;
using namespace DCT;

class DictSenderI : public DictSender
{
	public:
		void getDictBack(const TestMap& dict, const Ice::Current&){}

};


class DictClient : public Ice::Application
{
	public:
		virtual int run(int, char* []);
};

int main(int argc, char* argv[])
{
	DictClient app;
	return app.main(argc, argv, "config.client");
}

int DictClient::run(int argc, char* argv[])
{
	TestMap dict;
	dict["First"] = 1;
	DictReceiverPrx proxy = DictReceiverPrx::checkedCast(communicator()->propertyToProxy("DictReceiver.Proxy"));
	if(!proxy)
	{
		cerr << appName() << ": Invalid proxy" << endl;
		return EXIT_FAILURE;
	}

	Ice::ObjectAdapterPtr adapter = communicator()->createObjectAdapter("DictSender.Client");
	DictSenderPtr ds = new DictSenderI;
	adapter->add(ds, communicator()->stringToIdentity("sender"));
	adapter->activate();
	DictSenderPrx rProxy = DictSenderPrx::uncheckedCast(adapter->createProxy(communicator()->stringToIdentity("dictSender")));

	try
	{
		proxy->receiveDict(dict, rProxy);
	}catch(const Ice::Exception& ex)
	{
		cerr << ex << endl;
	}

	char c;
	cout << "-->";
	cin >> c;
	while(cin.good() && c != 'x');
	proxy->shutdown();

	return EXIT_SUCCESS;
}
