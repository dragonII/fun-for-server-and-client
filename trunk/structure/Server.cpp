#include <Ice/Ice.h>
#include <ServerSideI.h>

using namespace SSTRUCT;
using namespace std;

class StructServer : public Ice::Application
{
	public:
		virtual int run(int, char* []);
};

int main(int argc, char *argv[])
{
	StructServer app;
	return app.main(argc, argv, "config.server");
}

int StructServer::run(int argc, char* argv[])
{
	Ice::ObjectAdapterPtr adapter = communicator()->createObjectAdapter("Struct.Server");
	ServerSidePtr ssp = new ServerSideI;
	adapter->add(ssp, communicator()->stringToIdentity("structServer"));
	adapter->activate();
	communicator()->waitForShutdown();
	return EXIT_SUCCESS;
}
