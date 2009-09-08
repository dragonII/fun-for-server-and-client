#include <Ice/Ice.h>
#include <Callback.h>
#include <iostream>
#include <fstream>

using namespace std;
using namespace Demo;

#define BLOCK_SIZE 1024

class CallbackReceiverI : public CallbackReceiver
{
	public:
		CallbackReceiverI();
		virtual void callback(const ByteSeq& data, const Ice::Current&)
		{
			data_len += data.size();
			copy(data.begin(), data.end(), cur_pos);
			//for(int i = 0; i < data.size(); i++)
			//{
			//	cur_pos[i] = data[i];
			//}
			cur_pos += data.size();
			if(cur_pos >= big_buffer + (BLOCK_SIZE * 1000))
				saveFile();
		}
		~CallbackReceiverI();

	private:
		void openFile();
		void closeFile();
		void saveFile();
		char* cur_pos;
		char big_buffer[BLOCK_SIZE * 1000];
		ofstream of;
		long data_len;
};

void CallbackReceiverI::openFile()
{
	of.open("/tmp/client.mp3", ios::binary | ios::app);
	if(!of)
		cout << "file open failed" << endl;
}

void CallbackReceiverI::closeFile()
{
	of.close();
}

CallbackReceiverI::CallbackReceiverI()
{
	memset(big_buffer, 0, (BLOCK_SIZE * 1000));
	cur_pos = big_buffer;
	data_len = 0;
}

CallbackReceiverI::~CallbackReceiverI()
{
	if(data_len > 0);
	saveFile();
}

void CallbackReceiverI::saveFile()
{
	openFile();
	
	cout << "writing file from position: " << of.tellp() << endl;
	of.write(big_buffer, data_len);
	cout << "length to write: " << data_len << endl;
	closeFile();

	data_len = 0;
	cur_pos = big_buffer;
	memset(big_buffer, 0, (BLOCK_SIZE * 1000));
}

class CallbackClient : public Ice::Application
{
	public:
		CallbackClient();
		virtual int run(int, char* []);
};


int main(int argc, char* argv[])
{
	CallbackClient app;
	return app.main(argc, argv, "config.client");
}


CallbackClient::CallbackClient():
	Ice::Application(Ice::NoSignalHandling)
{
}

int CallbackClient::run(int argc, char* argv[])
{
	if(argc > 1)
	{
		cerr << appName() << ": too many argvments" << endl;
		return EXIT_FAILURE;
	}

	CallbackSenderPrx sProxy = CallbackSenderPrx::checkedCast(
			communicator()->propertyToProxy("CallbackSender.Proxy")->ice_twoway()->ice_timeout(-1)->ice_secure(false));
	if(!sProxy)
	{
		cerr << appName() << ": Invalid proxy" << endl;
		return EXIT_FAILURE;
	}

	Ice::ObjectAdapterPtr adapter = communicator()->createObjectAdapter("Callback.Client");
	CallbackReceiverPtr cr = new CallbackReceiverI;
	adapter->add(cr, communicator()->stringToIdentity("callbackReceiver"));
	adapter->activate();

	CallbackReceiverPrx rProxy = CallbackReceiverPrx::uncheckedCast(
			adapter->createProxy(communicator()->stringToIdentity("callbackReceiver")));

	try
	{
		sProxy->initiateCallback(rProxy);
	}catch(const Ice::Exception& ex)
	{
		cerr << ex << endl;
	}

	char c;
	cout << "--> ";
	cin >> c;
	while(cin.good() && c != 'x');
	sProxy->shutdown();

	return EXIT_SUCCESS;
}
