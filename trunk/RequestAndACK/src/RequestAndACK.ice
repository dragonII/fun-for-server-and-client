#ifndef REQUESTANDACK_ICE
#define REQUESTANDACK_ICE

module SRS
{
	sequence<byte> CharSeq;
	const int CharSeqSize = 512;
    dictionary<string, int> CMDMap;
	struct DataGet
	{
		int type;
		CharSeq content;
	};


    interface RequestSender
    {
        void getACKBack();
		void getDataBack(DataGet data);
    };

    interface RequestReceiver
    {
        void receiveRequest(RequestSender* proxy);
        void shutdown();
    };
};



#endif
