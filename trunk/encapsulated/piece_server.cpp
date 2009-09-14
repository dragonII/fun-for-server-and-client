#include <piece_server.h>

using namespace std;
using namespace Demo;

IabServer::IabServer()
{
}

void IabServer::initialize(int argc, char* argv[])
{

	_ic = Ice::initialize(argc, argv);
	Ice::ObjectAdapterPtr adapter = _ic->createObjectAdapterWithEndpoints("Callback.Server", "tcp -h * -p 10000");
	CallbackSenderPtr cbs = new CallbackSenderI;
	adapter->add(cbs, _ic->stringToIdentity("callback"));
	adapter->activate();
}

void IabServer::start()
{
	_ic->waitForShutdown();
}
