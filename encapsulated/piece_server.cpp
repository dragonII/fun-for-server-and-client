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
	CallbackSenderPtr cbs1 = new CallbackSenderI;
	CallbackSenderPtr cbs2 = new CallbackSenderI;
	adapter->add(cbs1, _ic->stringToIdentity("callback1"));
	adapter->add(cbs2, _ic->stringToIdentity("callback2"));
	adapter->activate();
}

void IabServer::start()
{
	_ic->waitForShutdown();
}
