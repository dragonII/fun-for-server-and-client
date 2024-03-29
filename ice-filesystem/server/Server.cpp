#include <Ice/Application.h>
#include <FilesystemI.h>

using namespace std;
using namespace Filesystem;

class FilesystemApp : virtual public Ice::Application
{
    public:
        virtual int run(int, char* [])
        {
            shutdownOnInterrupt();
            Ice::ObjectAdapterPtr adapter = communicator()->createObjectAdapterWithEndpoints(
                                                    "SimpleFilesystem", "default -p 10000");

            DirectoryIPtr root = new DirectoryI(communicator(), "/", 0);
            root->activate(adapter);

            FileIPtr file = new FileI(communicator(), "README", root);
            Lines text;
            text.push_back("This file system contains "
                           "a colletion fo poetry.");
            file->write(text);
            file->activate(adapter);

            DirectoryIPtr coleridge = new DirectoryI(communicator(), "Coleridge", root);
            coleridge->activate(adapter);

            file = new FileI(communicator(), "Kubla_Khan", coleridge);
            text.erase(text.begin(), text.end());
            text.push_back("In Xanada did Kubla Khan");
            text.push_back("A stately pleasure-dome decree:");
            text.push_back("Where Alph, the sacred river, ran");
            text.push_back("Through caverns measureless to man");
            text.push_back("Down to a sunless sea.");
            file->write(text);
            file->activate(adapter);

            adapter->activate();

            communicator()->waitForShutdown();
            if(interrupted())
            {
                cerr << appName() << ": received signal, shutting down" << endl;
            }
            return 0;
        };
};


int main(int argc, char *argv[])
{
    FilesystemApp app;
    return app.main(argc, argv);
}
