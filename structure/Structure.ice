#ifndef STRUCTURE_IEC
#define STRUCTURE_IEC

module SSTRUCT
{
	struct DataType
	{
		string hostInfo;
		string data;
		int flag;
	};
	
	interface ClientSide
	{
		void receiveStruct(DataType data);
	};

	interface ServerSide
	{
		void sendStruct(ClientSide* client);
		void shutdown();
	};


};



#endif
