#include <Ice/Ice.h>
#include <Callback.h>
#include <iostream>
#include <fstream>

using namespace std;
using namespace Demo;

#define BLOCK_SIZE 1024

class CallbackReceiverI : public CallbackReceiver
{
	public:
		virtual void callback(const Ice::Current&)
		{
			cout << "Client callbacked " << endl;
		}
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

	//default: twoway, no timeout, no secure
	CallbackSenderPrx sProxy = CallbackSenderPrx::checkedCast(
			communicator()->propertyToProxy("CallbackSender.Proxy"));
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
