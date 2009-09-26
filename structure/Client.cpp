#include <Ice/Ice.h>
#include <ClientSideI.h>
#include <iostream>
#include <unistd.h>

using namespace SSTRUCT;
using namespace std;


class StructClient : public Ice::Application
{
	public:
		virtual int run(int argc, char* argv[]);
};

int main(int argc, char* argv[])
{
	StructClient app;
	return app.main(argc, argv, "config.client");
}

int StructClient::run(int argc, char* argv[])
{
	ServerSidePrx sProxy = ServerSidePrx::checkedCast(
			communicator()->propertyToProxy("StructServer.Proxy"));

	if(!sProxy)
	{
		cerr << appName() << ": Invalid proxy" << endl;
		return EXIT_FAILURE;
	}

	Ice::ObjectAdapterPtr adapter = communicator()->createObjectAdapter("Struct.Client");
	ClientSidePtr csp = new ClientSideI;
	adapter->add(csp, communicator()->stringToIdentity("structReceiver"));
	adapter->activate();

	ClientSidePrx rProxy = ClientSidePrx::uncheckedCast(
			adapter->createProxy(communicator()->stringToIdentity("structReceiver")));

	try
	{
		sProxy->sendStruct(rProxy);
	}
	catch(const Ice::Exception& ex)
	{
		cout << ex << endl;
	}

	sleep(10);

	return EXIT_SUCCESS;
}
