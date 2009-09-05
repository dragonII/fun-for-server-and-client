#include <Ice/Ice.h>
#include <CallbackSenderI.h>

using namespace std;
using namespace CST;

class CallbackServer : public Ice::Application
{
    public:
        virtual int run(int, char* []);
};

int main(int argc, char* argv[])
{
    CallbackServer app;
    return app.main(argc, argv, "config.server");
}

int CallbackServer::run(int argc, char* argv[])
{
    if(argc > 1)
    {
        cerr << appName() << ": Too many arguments" << endl;
        return EXIT_FAILURE;
    }

    Ice::ObjectAdapterPtr adapter = communicator()->createObjectAdapter("Callback.Server");
    CallbackSenderPtr cbs = new CallbackSenderI;
    adapter->add(cbs, communicator()->stringToIdentity("callback"));
    adapter->activate();
    communicator()->waitForShutdown();
    return EXIT_SUCCESS;
}
