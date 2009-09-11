#ifndef DICT_ICE
#define DICT_ICE

module DCT
{
	dictionary<string, int> TestMap;

	interface DictSender
	{
		void getDictBack(TestMap dictMap);
	};

	interface DictReceiver
	{
		void receiveDict(TestMap dictMap, DictSender* proxy);
		void shutdown();
	};

};

#endif
