// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Callback.ice'

#ifndef __Callback_h__
#define __Callback_h__

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

namespace Demo
{

class CallbackReceiver;

class CallbackSender;

}

}

namespace Demo
{

class CallbackReceiver;
bool operator==(const CallbackReceiver&, const CallbackReceiver&);
bool operator<(const CallbackReceiver&, const CallbackReceiver&);

class CallbackSender;
bool operator==(const CallbackSender&, const CallbackSender&);
bool operator<(const CallbackSender&, const CallbackSender&);

}

namespace IceInternal
{

::Ice::Object* upCast(::Demo::CallbackReceiver*);
::IceProxy::Ice::Object* upCast(::IceProxy::Demo::CallbackReceiver*);

::Ice::Object* upCast(::Demo::CallbackSender*);
::IceProxy::Ice::Object* upCast(::IceProxy::Demo::CallbackSender*);

}

namespace Demo
{

typedef ::IceInternal::Handle< ::Demo::CallbackReceiver> CallbackReceiverPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Demo::CallbackReceiver> CallbackReceiverPrx;

void __read(::IceInternal::BasicStream*, CallbackReceiverPrx&);
void __patch__CallbackReceiverPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Demo::CallbackSender> CallbackSenderPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Demo::CallbackSender> CallbackSenderPrx;

void __read(::IceInternal::BasicStream*, CallbackSenderPrx&);
void __patch__CallbackSenderPtr(void*, ::Ice::ObjectPtr&);

}

namespace IceProxy
{

namespace Demo
{

class CallbackReceiver : virtual public ::IceProxy::Ice::Object
{
public:

    void callback(const ::std::string& data)
    {
        callback(data, 0);
    }
    void callback(const ::std::string& data, const ::Ice::Context& __ctx)
    {
        callback(data, &__ctx);
    }
    
private:

    void callback(const ::std::string&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<CallbackReceiver> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CallbackReceiver*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<CallbackReceiver*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CallbackReceiver> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CallbackReceiver*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<CallbackReceiver*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CallbackReceiver> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CallbackReceiver*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<CallbackReceiver*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CallbackReceiver> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CallbackReceiver*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<CallbackReceiver*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CallbackReceiver> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CallbackReceiver*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<CallbackReceiver*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CallbackReceiver> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CallbackReceiver*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<CallbackReceiver*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CallbackReceiver> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CallbackReceiver*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<CallbackReceiver*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CallbackReceiver> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CallbackReceiver*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<CallbackReceiver*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CallbackReceiver> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CallbackReceiver*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<CallbackReceiver*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CallbackReceiver> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CallbackReceiver*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<CallbackReceiver*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CallbackReceiver> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CallbackReceiver*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<CallbackReceiver*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CallbackReceiver> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CallbackReceiver*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<CallbackReceiver*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CallbackReceiver> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CallbackReceiver*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<CallbackReceiver*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CallbackReceiver> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CallbackReceiver*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<CallbackReceiver*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CallbackReceiver> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CallbackReceiver*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<CallbackReceiver*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CallbackReceiver> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CallbackReceiver*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<CallbackReceiver*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CallbackReceiver> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CallbackReceiver*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<CallbackReceiver*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CallbackReceiver> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CallbackReceiver*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<CallbackReceiver*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CallbackReceiver> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CallbackReceiver*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<CallbackReceiver*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class CallbackSender : virtual public ::IceProxy::Ice::Object
{
public:

    void initiateCallback(const ::Demo::CallbackReceiverPrx& proxy)
    {
        initiateCallback(proxy, 0);
    }
    void initiateCallback(const ::Demo::CallbackReceiverPrx& proxy, const ::Ice::Context& __ctx)
    {
        initiateCallback(proxy, &__ctx);
    }
    
private:

    void initiateCallback(const ::Demo::CallbackReceiverPrx&, const ::Ice::Context*);
    
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
    
    ::IceInternal::ProxyHandle<CallbackSender> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CallbackSender*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<CallbackSender*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CallbackSender> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CallbackSender*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<CallbackSender*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CallbackSender> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CallbackSender*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<CallbackSender*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CallbackSender> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CallbackSender*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<CallbackSender*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CallbackSender> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CallbackSender*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<CallbackSender*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CallbackSender> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CallbackSender*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<CallbackSender*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CallbackSender> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CallbackSender*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<CallbackSender*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CallbackSender> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CallbackSender*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<CallbackSender*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CallbackSender> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CallbackSender*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<CallbackSender*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CallbackSender> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CallbackSender*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<CallbackSender*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CallbackSender> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CallbackSender*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<CallbackSender*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CallbackSender> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CallbackSender*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<CallbackSender*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CallbackSender> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CallbackSender*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<CallbackSender*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CallbackSender> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CallbackSender*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<CallbackSender*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CallbackSender> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CallbackSender*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<CallbackSender*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CallbackSender> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CallbackSender*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<CallbackSender*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CallbackSender> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CallbackSender*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<CallbackSender*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CallbackSender> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CallbackSender*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<CallbackSender*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CallbackSender> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CallbackSender*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<CallbackSender*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

namespace Demo
{

class CallbackReceiver : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual void callback(const ::std::string&, const ::Ice::Context*) = 0;
};

class CallbackSender : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual void initiateCallback(const ::Demo::CallbackReceiverPrx&, const ::Ice::Context*) = 0;

    virtual void shutdown(const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace Demo
{

class CallbackReceiver : virtual public ::IceDelegate::Demo::CallbackReceiver,
                         virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual void callback(const ::std::string&, const ::Ice::Context*);
};

class CallbackSender : virtual public ::IceDelegate::Demo::CallbackSender,
                       virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual void initiateCallback(const ::Demo::CallbackReceiverPrx&, const ::Ice::Context*);

    virtual void shutdown(const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace Demo
{

class CallbackReceiver : virtual public ::IceDelegate::Demo::CallbackReceiver,
                         virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual void callback(const ::std::string&, const ::Ice::Context*);
};

class CallbackSender : virtual public ::IceDelegate::Demo::CallbackSender,
                       virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual void initiateCallback(const ::Demo::CallbackReceiverPrx&, const ::Ice::Context*);

    virtual void shutdown(const ::Ice::Context*);
};

}

}

namespace Demo
{

class CallbackReceiver : virtual public ::Ice::Object
{
public:

    typedef CallbackReceiverPrx ProxyType;
    typedef CallbackReceiverPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void callback(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___callback(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class CallbackSender : virtual public ::Ice::Object
{
public:

    typedef CallbackSenderPrx ProxyType;
    typedef CallbackSenderPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void initiateCallback(const ::Demo::CallbackReceiverPrx&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___initiateCallback(::IceInternal::Incoming&, const ::Ice::Current&);

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
