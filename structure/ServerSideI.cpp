#include <ServerSideI.h>
#include <iostream>

using namespace SSTRUCT;
using namespace std;

ServerSideI::ServerSideI()
{
	_data.hostInfo = "Place IP addr here";
	_data.data = "Data to be sent";
	_data.flag = 1;
}

void ServerSideI::sendStruct(const ClientSidePrx& proxy, const Ice::Current& c)
{
	if(c.con)
		cout << c.con->toString() << endl;
	proxy->receiveStruct(_data);
}

void ServerSideI::shutdown(const Ice::Current& c)
{
	cout << "Server is shutting down..." << endl;
	try
	{
		c.adapter->getCommunicator()->shutdown();
	}
	catch(const Ice::Exception& ex)
	{
		cout << ex << endl;
	}
}
	
