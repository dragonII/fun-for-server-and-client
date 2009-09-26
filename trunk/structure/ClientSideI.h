#ifndef CLIENTSIDEI_H
#define CLIENTSIDEI_H

#include <Ice/Ice.h>
#include <Structure.h>

class ClientSideI : public SSTRUCT::ClientSide
{
	public:
	ClientSideI();
	virtual void receiveStruct(const SSTRUCT::DataType& data, const Ice::Current&);
};


#endif
