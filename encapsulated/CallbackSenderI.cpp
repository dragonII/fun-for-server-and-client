#include <Ice/Ice.h>
#include <CallbackSenderI.h>
#include <iostream>
#include <fstream>

using namespace std;
using namespace Ice;

#define BLOCK_SIZE 1024

void CallbackSenderI::initiateCallback(const Demo::CallbackReceiverPrx& proxy, const Current& current)
{
	cout << "Initialized!" << endl;
	
	try
	{
		proxy->callback();
	}catch(const Exception& ex)
	{
		cout << ex << endl;
	}
}

void CallbackSenderI::shutdown(const Current& e)
{
	cout << "shutting donn ..." << endl;
	try
	{
		e.adapter->getCommunicator()->shutdown();
	}
	catch(const Exception& ex)
	{
		cout << ex << endl;
	}
}
