#include <CallbackReceiverI.h>

using namespace Demo;
using namespace std;

void CallbackReceiverI::callback(const Ice::Current&)
{
	cout << "Client callbacked " << endl;
}


