#ifndef REQUESTSENDERI_H
#define REQUESTSENDERI_H

class RequestSenderI : RequestSender
{
	public:
		void getACKBack(const Ice::Current&);
};



#endif
