#ifndef CALLBACKRECEIVERI_H
#define CALLBACKRECEIVERI_H

#include <Ice/Ice.h>
#include <Callback.h>

class CallbackReceiverI : public Demo::CallbackReceiver
{
	public:
		virtual void callback(const Ice::Current&);
};

#endif

