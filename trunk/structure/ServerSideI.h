#ifndef SERVERSIDEI_H
#define SERVERSIDEI_H

#include <Ice/Ice.h>
#include <Structure.h>

class ServerSideI : public SSTRUCT::ServerSide
{
	public:
		ServerSideI();
		virtual void sendStruct(const SSTRUCT::ClientSidePrx& proxy, const Ice::Current&);
		virtual void shutdown(const Ice::Current&);

	private:
		SSTRUCT::DataType _data;
};

#endif
