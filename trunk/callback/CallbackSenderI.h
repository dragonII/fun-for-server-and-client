#ifndef CALLBACKSENDERI_H
#define CALLBACKSENDERI_H

#include <Callback.h>

class CallbackSenderI : public Demo::CallbackSender
{
	public:
		virtual void initiateCallback(const Demo::CallbackReceiverPrx&, const Ice::Current&);
		virtual void shutdown(const Ice::Current&);
};

#endif
