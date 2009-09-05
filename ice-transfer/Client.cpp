#include <Ice/Ice.h>
#include <Callback.h>

using namespace std;
using namespace CST;

class CallbackRecerverI : public CallbackReceiver
{
    public:
        virtual void callback(const Ice::Current&)
        {
            cout << "received callback ... ;)" << endl;
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

CallbackClient::CallbackClient() : Ice::Application(Ice::NoSignalHandling)
{

}


int CallbackClient::run(int argc, char* argv[])
{
    if(argc > 1)
    {
        cerr << appName() << ": too many arguments for client!" << endl;
        return EXIT_FAILURE;
    }

    CallbackSenderPrx sProxy = CallbackSenderPrx::checkedCast(
            communicator()->propertyToProxy("CallbackSender.Proxy"));
    if(!sProxy)
    {
        cerr << appName() << ": invalid proxy" << endl;
        return EXIT_FAILURE;
    }

    Ice::ObjectAdapterPtr adapter = communicator()->createObjectAdapter("Callback.Client");
    CallbackReceiverPtr cr = new CallbackRecerverI;
    adapter->add(cr, communicator()->stringToIdentity("CallbackRecerver"));
    adapter->activate();

    CallbackReceiverPrx rProxy = CallbackReceiverPrx::uncheckedCast(
            adapter->createProxy(communicator()->stringToIdentity("CallbackRecerver")));
    try
    {
        sProxy->initiateCallback(rProxy);
    }catch(const Ice::Exception& ex)
    {
        cerr << ex << endl;
    }

    char c;
    cout << "input x to terminate" << endl;
    cout << "==> ";
    cin >> c;
    while(cin.good() && c != 'x');

	sProxy->shutdown();
    
    return EXIT_SUCCESS;
}


    
