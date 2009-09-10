// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `RequestAndACK.ice'

#ifndef __RequestAndACK_h__
#define __RequestAndACK_h__

#include <Ice/LocalObjectF.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/Proxy.h>
#include <Ice/Object.h>
#include <Ice/Outgoing.h>
#include <Ice/Incoming.h>
#include <Ice/Direct.h>
#include <Ice/StreamF.h>
#include <Ice/UndefSysMacros.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 303
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 1
#       error Ice patch level mismatch!
#   endif
#endif

namespace IceProxy
{

namespace SRS
{

class RequestSender;

class RequestReceiver;

}

}

namespace SRS
{

class RequestSender;
bool operator==(const RequestSender&, const RequestSender&);
bool operator<(const RequestSender&, const RequestSender&);

class RequestReceiver;
bool operator==(const RequestReceiver&, const RequestReceiver&);
bool operator<(const RequestReceiver&, const RequestReceiver&);

}

namespace IceInternal
{

::Ice::Object* upCast(::SRS::RequestSender*);
::IceProxy::Ice::Object* upCast(::IceProxy::SRS::RequestSender*);

::Ice::Object* upCast(::SRS::RequestReceiver*);
::IceProxy::Ice::Object* upCast(::IceProxy::SRS::RequestReceiver*);

}

namespace SRS
{

typedef ::IceInternal::Handle< ::SRS::RequestSender> RequestSenderPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::SRS::RequestSender> RequestSenderPrx;

void __read(::IceInternal::BasicStream*, RequestSenderPrx&);
void __patch__RequestSenderPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::SRS::RequestReceiver> RequestReceiverPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::SRS::RequestReceiver> RequestReceiverPrx;

void __read(::IceInternal::BasicStream*, RequestReceiverPrx&);
void __patch__RequestReceiverPtr(void*, ::Ice::ObjectPtr&);

}

namespace SRS
{

typedef ::std::map< ::std::string, ::Ice::Int> CMDMap;
void __writeCMDMap(::IceInternal::BasicStream*, const CMDMap&);
void __readCMDMap(::IceInternal::BasicStream*, CMDMap&);

}

namespace IceProxy
{

namespace SRS
{

class RequestSender : virtual public ::IceProxy::Ice::Object
{
public:

    void getACKBack()
    {
        getACKBack(0);
    }
    void getACKBack(const ::Ice::Context& __ctx)
    {
        getACKBack(&__ctx);
    }
    
private:

    void getACKBack(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<RequestSender> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RequestSender*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<RequestSender*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RequestSender> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RequestSender*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<RequestSender*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RequestSender> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RequestSender*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<RequestSender*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RequestSender> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RequestSender*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<RequestSender*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RequestSender> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RequestSender*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<RequestSender*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RequestSender> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RequestSender*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<RequestSender*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RequestSender> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RequestSender*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<RequestSender*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RequestSender> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RequestSender*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<RequestSender*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RequestSender> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RequestSender*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<RequestSender*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RequestSender> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RequestSender*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<RequestSender*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RequestSender> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RequestSender*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<RequestSender*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RequestSender> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RequestSender*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<RequestSender*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RequestSender> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RequestSender*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<RequestSender*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RequestSender> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RequestSender*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<RequestSender*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RequestSender> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RequestSender*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<RequestSender*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RequestSender> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RequestSender*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<RequestSender*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RequestSender> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RequestSender*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<RequestSender*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RequestSender> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RequestSender*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<RequestSender*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RequestSender> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RequestSender*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<RequestSender*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class RequestReceiver : virtual public ::IceProxy::Ice::Object
{
public:

    void receiveRequest(const ::SRS::RequestSenderPrx& proxy)
    {
        receiveRequest(proxy, 0);
    }
    void receiveRequest(const ::SRS::RequestSenderPrx& proxy, const ::Ice::Context& __ctx)
    {
        receiveRequest(proxy, &__ctx);
    }
    
private:

    void receiveRequest(const ::SRS::RequestSenderPrx&, const ::Ice::Context*);
    
public:

    void shutdown()
    {
        shutdown(0);
    }
    void shutdown(const ::Ice::Context& __ctx)
    {
        shutdown(&__ctx);
    }
    
private:

    void shutdown(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<RequestReceiver> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RequestReceiver*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<RequestReceiver*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RequestReceiver> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RequestReceiver*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<RequestReceiver*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RequestReceiver> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RequestReceiver*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<RequestReceiver*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RequestReceiver> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RequestReceiver*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<RequestReceiver*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RequestReceiver> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RequestReceiver*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<RequestReceiver*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RequestReceiver> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RequestReceiver*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<RequestReceiver*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RequestReceiver> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RequestReceiver*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<RequestReceiver*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RequestReceiver> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RequestReceiver*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<RequestReceiver*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RequestReceiver> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RequestReceiver*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<RequestReceiver*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RequestReceiver> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RequestReceiver*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<RequestReceiver*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RequestReceiver> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RequestReceiver*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<RequestReceiver*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RequestReceiver> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RequestReceiver*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<RequestReceiver*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RequestReceiver> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RequestReceiver*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<RequestReceiver*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RequestReceiver> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RequestReceiver*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<RequestReceiver*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RequestReceiver> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RequestReceiver*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<RequestReceiver*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RequestReceiver> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RequestReceiver*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<RequestReceiver*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RequestReceiver> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RequestReceiver*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<RequestReceiver*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RequestReceiver> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RequestReceiver*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<RequestReceiver*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RequestReceiver> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RequestReceiver*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<RequestReceiver*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

namespace IceDelegate
{

namespace SRS
{

class RequestSender : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual void getACKBack(const ::Ice::Context*) = 0;
};

class RequestReceiver : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual void receiveRequest(const ::SRS::RequestSenderPrx&, const ::Ice::Context*) = 0;

    virtual void shutdown(const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace SRS
{

class RequestSender : virtual public ::IceDelegate::SRS::RequestSender,
                      virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual void getACKBack(const ::Ice::Context*);
};

class RequestReceiver : virtual public ::IceDelegate::SRS::RequestReceiver,
                        virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual void receiveRequest(const ::SRS::RequestSenderPrx&, const ::Ice::Context*);

    virtual void shutdown(const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace SRS
{

class RequestSender : virtual public ::IceDelegate::SRS::RequestSender,
                      virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual void getACKBack(const ::Ice::Context*);
};

class RequestReceiver : virtual public ::IceDelegate::SRS::RequestReceiver,
                        virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual void receiveRequest(const ::SRS::RequestSenderPrx&, const ::Ice::Context*);

    virtual void shutdown(const ::Ice::Context*);
};

}

}

namespace SRS
{

class RequestSender : virtual public ::Ice::Object
{
public:

    typedef RequestSenderPrx ProxyType;
    typedef RequestSenderPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void getACKBack(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getACKBack(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class RequestReceiver : virtual public ::Ice::Object
{
public:

    typedef RequestReceiverPrx ProxyType;
    typedef RequestReceiverPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void receiveRequest(const ::SRS::RequestSenderPrx&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___receiveRequest(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void shutdown(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___shutdown(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

#endif
