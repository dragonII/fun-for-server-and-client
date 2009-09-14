#ifndef PIECE1_H
#define PIECE1_H


#include <Ice/Ice.h>
#include <Callback.h>
#include <CallbackReceiverI.h>


class Iabs : public CallbackReceiverI
{
	public:
		Iabs();

		void open(int argc, char* argv[]);
		void doit();
		void close();
	private:
		Demo::CallbackSenderPrx _sProxy;
		Demo::CallbackReceiverPrx _rProxy;
};



#endif
