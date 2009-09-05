#include <Callback.h>

class CallbackSenderI : public CST::CallbackSender
{
    public:

        virtual void initiateCallback(const CST::CallbackReceiverPrx&, const Ice::Current&);
        virtual void shutdown(const Ice::Current&);
};

