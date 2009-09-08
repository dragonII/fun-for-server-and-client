#include <Ice/Ice.h>
#include <CallbackSenderI.h>
#include <iostream>
#include <fstream>

using namespace std;
using namespace Ice;

#define BLOCK_SIZE 1024

void CallbackSenderI::initiateCallback(const Demo::CallbackReceiverPrx& proxy, const Current& current)
{
	Demo::ByteSeq data(BLOCK_SIZE);
	long read_len = 0;
	ifstream is;
	is.open("/data/media_files/Tell.mp3");
	cout << "initializing the callback, openning file" << endl;
	if(!is)
	{
		cout << "file open failed" << endl;
	}
	while(1)
	{
		usleep(1000);
		memset(reinterpret_cast<char*>(&data[0]), 0, BLOCK_SIZE);
		try
		{
			is.read(reinterpret_cast<char*>(&data[0]), BLOCK_SIZE);
		}
		catch(ifstream::failure e)
		{
			cout << "open/read failed" << endl;
		}
		try
		{
			proxy->callback(data);
		}catch(const Exception& ex)
		{
			cout << ex << endl;
			break;
		}
		read_len += data.size();
		if(is.eof())
		{
			is.close();
			cout << "read done, close file" << endl;
			cout << "totally read: " << read_len << endl;
			break;
		}

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
