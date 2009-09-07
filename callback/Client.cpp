#include <Ice/Ice.h>
#include <Callback.h>

using namespace std;
using namespace Demo;

class CallbackReceiverI : public CallbackReceiver
{
	public:
		virtual void callback(const string& data, const Ice::Current&)
		{
			cout << "data received from callback" << endl;
			_data = data;
			cout << "data:===| " << _data << endl;
		}

	private:
		string _data;
};

class CallbackClient : public Ice::Application
{
	public:
		CallbackClient();
		virtual int run(int, char* []);
};


int main(int argc, char* argv[])
{
	CallbackClient app;
	return app.main(argc, argv, "config.client");
}


CallbackClient::CallbackClient():
	Ice::Application(Ice::NoSignalHandling)
{
}

int CallbackClient::run(int argc, char* argv[])
{
	if(argc > 1)
	{
		cerr << appName() << ": too many argvments" << endl;
		return EXIT_FAILURE;
	}

	CallbackSenderPrx sProxy = CallbackSenderPrx::checkedCast(
			communicator()->propertyToProxy("CallbackSender.Proxy")->ice_twoway()->ice_timeout(-1)->ice_secure(false));
	if(!sProxy)
	{
		cerr << appName() << ": Invalid proxy" << endl;
		return EXIT_FAILURE;
	}

	Ice::ObjectAdapterPtr adapter = communicator()->createObjectAdapter("Callback.Client");
	CallbackReceiverPtr cr = new CallbackReceiverI;
	adapter->add(cr, communicator()->stringToIdentity("callbackReceiver"));
	adapter->activate();

	CallbackReceiverPrx rProxy = CallbackReceiverPrx::uncheckedCast(
			adapter->createProxy(communicator()->stringToIdentity("callbackReceiver")));

	try
	{
		sProxy->initiateCallback(rProxy);
	}catch(const Ice::Exception& ex)
	{
		cerr << ex << endl;
	}

	char c;
	cout << "--> ";
	cin >> c;
	while(cin.good() && c != 'x');
	sProxy->shutdown();

	return EXIT_SUCCESS;
}
