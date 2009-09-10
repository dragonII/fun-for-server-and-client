#ifndef REQUESTANDACK_ICE
#define REQUESTANDACK_ICE

module SRS
{
    dictionary<string, int> CMDMap;

    interface RequestSender
    {
        void getACKBack();
    };

    interface RequestReceiver
    {
        void receiveRequest(RequestSender* proxy);
        void shutdown();
    };
};



#endif
