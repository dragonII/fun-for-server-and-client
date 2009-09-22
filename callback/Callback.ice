module Demo
{

	sequence <byte> ByteSeq;
	interface CallbackReceiver
	{
		void callback(ByteSeq data, int len);
	};

	interface CallbackSender
	{
		void initiateCallback(CallbackReceiver* proxy);
		void shutdown();
	};
};
