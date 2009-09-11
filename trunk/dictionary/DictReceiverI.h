#ifndef DICTRECEIVERI_H
#define DICTRECEIVERI_H

#include <Dict.h>

class DictReceiverI : public DCT::DictReceiver
{
	public:
		virtual void receiveDict(const DCT::TestMap&, const DCT::DictSenderPrx&, const Ice::Current&);
		virtual void shutdown(const Ice::Current&);
};

#endif
