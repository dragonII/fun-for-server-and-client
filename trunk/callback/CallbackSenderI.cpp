#include <Ice/Ice.h>
#include <CallbackSenderI.h>

using namespace std;
using namespace Ice;
using namespace Demo;

void CallbackSenderI::initiateCallback(const CallbackReceiverPrx& proxy, const Current& current)
{
	cout << "initializing the callback" << endl;
	string data = "JJKASDF98UIQKNMASDKFAEYWU8I9O09uaidsfhn;alksdfj";
	try
	{
		proxy->callback(data);
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
