module Demo
{
	interface CallbackReceiver
	{
		void callback(string data);
	};

	interface CallbackSender
	{
		void initiateCallback(CallbackReceiver* proxy);
		void shutdown();
	};
};
