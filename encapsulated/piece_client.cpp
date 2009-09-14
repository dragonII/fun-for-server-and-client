#include <Ice/Ice.h>
#include <Callback.h>
#include <CallbackReceiverI.h>
#include <piece_client.h>

using namespace std;
using namespace Demo;

Iabs::Iabs()
{
}

void Iabs::open(int argc, char* argv[])
{
	Ice::CommunicatorPtr ic;
	
	ic = Ice::initialize(argc, argv);
	Ice::ObjectPrx base = ic->stringToProxy("callback:tcp -h 192.168.3.98 -p 10000");
	_sProxy = CallbackSenderPrx::checkedCast(base);
	if(!_sProxy)
		throw "Invalid _sProxy";

	//Ice::ObjectAdapterPtr adapter = communicator()->createObjectAdapterWithEndpoints("Callback.Client", "tcp");
	//CallbackReceiverPtr cr = new CallbackReceiverI;
	//adapter->add(cr, communicator()->stringToIdentity("callbackReceiver"));
	//adapter->activate();
	Ice::ObjectAdapterPtr adapter = ic->createObjectAdapterWithEndpoints("Callback.Client", "tcp");
	CallbackReceiverPtr cr = new CallbackReceiverI;
	adapter->add(cr, ic->stringToIdentity("callbackReceiver"));
	adapter->activate();

	_rProxy = CallbackReceiverPrx::uncheckedCast(adapter->createProxy(ic->stringToIdentity("callbackReceiver")));
	if(!_rProxy)
		throw "Invalid _rProxy";

}

void Iabs::doit()
{
	try
	{
		_sProxy->initiateCallback(_rProxy);
	}catch(const Ice::Exception& ex)
	{
		cerr << ex << endl;
	}
}

void Iabs::close()
{
	char c;
	cout << "--> ";
	cin >> c;
	while(cin.good() && c != 'x');
	_sProxy->shutdown();
}


