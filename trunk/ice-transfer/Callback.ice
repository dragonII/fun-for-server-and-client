#ifndef CALLBACK_ICE
#define CALLBACK_ICE

module CST
{
    interface CallbackReceiver
    {
        void callback();
    };

    interface CallbackSender
    {
        void initiateCallback(CallbackReceiver* proxy);
        void shutdown();
    };
};




#endif
