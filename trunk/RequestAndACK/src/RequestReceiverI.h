#ifndef REQUESTSENDERI_H
#define REQUESTSENDERI_H

#include <RequestAndACK.h>

class RequestReceiverI: SRS::RequestReceiver
{
    public:
        virtual void receiveRequest(const SRS::RequestSenderPrx&, const Ice::Current&);
        virtual void shutdown(const Ice::Current&);
        virtual void getCtx(const Ice::Current&);
        unsigned int parseCtx(const Ice::Current&);

        //functions to deal with actual transctions 
        virtual void func1(const Ice::Current&);
        virtual void func2(const Ice::Current&);
        virtual void func3(const Ice::Current&);
        
    private:
        Ice::Context _ctx;
};
    
#endif
