#include <Ice/Ice.h>
#include <DictReceiverI.h>

using namespace std;
using namespace DCT;

void DictReceiverI::receiveDict(const TestMap& dict, const DictSenderPrx&, const Ice::Current&)
{
	TestMap t_dict = dict;
	//TestMap::const_iterator it = t_dict;

	map<string, int>::iterator it = t_dict.begin();
	cout << "it.first: " << it->first << endl;
	cout << "it.second: " << it->second << endl;
}

void DictReceiverI::shutdown(const Ice::Current& e)
{
	cout << "Shutting down the Server... " << endl;
	try
	{
		e.adapter->getCommunicator()->shutdown();
	}catch(const Ice::Exception& ex)
	{
		cout << ex << endl;
	}
}

