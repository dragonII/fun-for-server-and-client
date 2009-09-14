#ifndef PIECE_SERVER_H
#define PIECE_SERVER_H

#include <Ice/Ice.h>
#include <CallbackSenderI.h>

class IabServer
{
	public:
		IabServer();

		void initialize(int argc, char* argv[]);
		void start();

	private:
		Ice::CommunicatorPtr _ic;
};

#endif
