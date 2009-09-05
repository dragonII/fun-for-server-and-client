#include <Ice/Ice.h>
#include <CallbackSenderI.h>

using namespace std;
using namespace Ice;
using namespace CST;

void CallbackSenderI::initiateCallback(const CallbackReceiverPrx& proxy, const Current& current)
{
    cout << "Initiating ..." << endl;
    try
    {
        proxy->callback();
    }catch(const Exception& ex)
    {
        cout << ex << endl;
    }

}

void CallbackSenderI::shutdown(const Current& c)
{
    cout << "shutting down... " << endl;
    try
    {
        c.adapter->getCommunicator()->shutdown();
    }catch(const Exception& ex)
    {
        cout << ex << endl;
    }
}
