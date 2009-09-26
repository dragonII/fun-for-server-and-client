#include <ClientSideI.h>
#include <iostream>

using namespace SSTRUCT;
using namespace std;

ClientSideI::ClientSideI()
{
}

void ClientSideI::receiveStruct(const DataType& data, const Ice::Current& c)
{
	if(c.con)
		cout << c.con->toString() << endl;

	cout << "Data from Server" << endl;
	cout << "hostinfo: " << data.hostInfo << endl;
	cout << "data: " << data.data << endl;
	cout << "flag: " << data.flag << endl;

	cout << "Shutting down the server" << endl;
}
