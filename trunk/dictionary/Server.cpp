#include <Ice/Ice.h>
#include <DictReceiverI.h>

using namespace std;
using namespace DCT;

class DictServer : public Ice::Application
{
	public:
		virtual int run(int, char* []);
};

int main(int argc, char* argv[])
{
	DictServer app;
	return app.main(argc, argv, "config.server");
}



int DictServer::run(int argc, char* argv[])
{
	Ice::ObjectAdapterPtr adapter = communicator()->createObjectAdapter("Dict.Server");
	DictReceiverPtr dr = new DictReceiverI;
	adapter->add(dr, communicator()->stringToIdentity("receiver"));
	adapter->activate();
	communicator()->waitForShutdown();
	return EXIT_SUCCESS;
}
