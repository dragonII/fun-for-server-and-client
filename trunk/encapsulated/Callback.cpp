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

#include <Callback.h>
#include <Ice/LocalException.h>
#include <Ice/ObjectFactory.h>
#include <Ice/BasicStream.h>
#include <IceUtil/Iterator.h>
#include <IceUtil/ScopedArray.h>

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

static const ::std::string __Demo__CallbackReceiver__callback_name = "callback";

static const ::std::string __Demo__CallbackSender__initiateCallback_name = "initiateCallback";

static const ::std::string __Demo__CallbackSender__shutdown_name = "shutdown";

::Ice::Object* IceInternal::upCast(::Demo::CallbackReceiver* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Demo::CallbackReceiver* p) { return p; }

::Ice::Object* IceInternal::upCast(::Demo::CallbackSender* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Demo::CallbackSender* p) { return p; }

void
Demo::__read(::IceInternal::BasicStream* __is, ::Demo::CallbackReceiverPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Demo::CallbackReceiver;
        v->__copyFrom(proxy);
    }
}

void
Demo::__read(::IceInternal::BasicStream* __is, ::Demo::CallbackSenderPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Demo::CallbackSender;
        v->__copyFrom(proxy);
    }
}

void
IceProxy::Demo::CallbackReceiver::callback(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::Demo::CallbackReceiver* __del = dynamic_cast< ::IceDelegate::Demo::CallbackReceiver*>(__delBase.get());
            __del->callback(__ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

const ::std::string&
IceProxy::Demo::CallbackReceiver::ice_staticId()
{
    return ::Demo::CallbackReceiver::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::Demo::CallbackReceiver::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::Demo::CallbackReceiver);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::Demo::CallbackReceiver::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::Demo::CallbackReceiver);
}

::IceProxy::Ice::Object*
IceProxy::Demo::CallbackReceiver::__newInstance() const
{
    return new CallbackReceiver;
}

void
IceProxy::Demo::CallbackSender::initiateCallback(const ::Demo::CallbackReceiverPrx& proxy, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::Demo::CallbackSender* __del = dynamic_cast< ::IceDelegate::Demo::CallbackSender*>(__delBase.get());
            __del->initiateCallback(proxy, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::Demo::CallbackSender::shutdown(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::Demo::CallbackSender* __del = dynamic_cast< ::IceDelegate::Demo::CallbackSender*>(__delBase.get());
            __del->shutdown(__ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

const ::std::string&
IceProxy::Demo::CallbackSender::ice_staticId()
{
    return ::Demo::CallbackSender::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::Demo::CallbackSender::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::Demo::CallbackSender);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::Demo::CallbackSender::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::Demo::CallbackSender);
}

::IceProxy::Ice::Object*
IceProxy::Demo::CallbackSender::__newInstance() const
{
    return new CallbackSender;
}

void
IceDelegateM::Demo::CallbackReceiver::callback(const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __Demo__CallbackReceiver__callback_name, ::Ice::Normal, __context);
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::Demo::CallbackSender::initiateCallback(const ::Demo::CallbackReceiverPrx& proxy, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __Demo__CallbackSender__initiateCallback_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(::Ice::ObjectPrx(::IceInternal::upCast(proxy.get())));
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::Demo::CallbackSender::shutdown(const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __Demo__CallbackSender__shutdown_name, ::Ice::Normal, __context);
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateD::Demo::CallbackReceiver::callback(const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::Demo::CallbackReceiver* servant = dynamic_cast< ::Demo::CallbackReceiver*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->callback(_current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __Demo__CallbackReceiver__callback_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(__current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::Demo::CallbackSender::initiateCallback(const ::Demo::CallbackReceiverPrx& proxy, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::Demo::CallbackReceiverPrx& proxy, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_proxy(proxy)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::Demo::CallbackSender* servant = dynamic_cast< ::Demo::CallbackSender*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->initiateCallback(_m_proxy, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::Demo::CallbackReceiverPrx& _m_proxy;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __Demo__CallbackSender__initiateCallback_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(proxy, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::Demo::CallbackSender::shutdown(const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::Demo::CallbackSender* servant = dynamic_cast< ::Demo::CallbackSender*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->shutdown(_current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __Demo__CallbackSender__shutdown_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(__current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

::Ice::ObjectPtr
Demo::CallbackReceiver::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __Demo__CallbackReceiver_ids[2] =
{
    "::Demo::CallbackReceiver",
    "::Ice::Object"
};

bool
Demo::CallbackReceiver::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Demo__CallbackReceiver_ids, __Demo__CallbackReceiver_ids + 2, _s);
}

::std::vector< ::std::string>
Demo::CallbackReceiver::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Demo__CallbackReceiver_ids[0], &__Demo__CallbackReceiver_ids[2]);
}

const ::std::string&
Demo::CallbackReceiver::ice_id(const ::Ice::Current&) const
{
    return __Demo__CallbackReceiver_ids[0];
}

const ::std::string&
Demo::CallbackReceiver::ice_staticId()
{
    return __Demo__CallbackReceiver_ids[0];
}

::Ice::DispatchStatus
Demo::CallbackReceiver::___callback(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    __inS.is()->skipEmptyEncaps();
    callback(__current);
    return ::Ice::DispatchOK;
}

static ::std::string __Demo__CallbackReceiver_all[] =
{
    "callback",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::Ice::DispatchStatus
Demo::CallbackReceiver::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Demo__CallbackReceiver_all, __Demo__CallbackReceiver_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Demo__CallbackReceiver_all)
    {
        case 0:
        {
            return ___callback(in, current);
        }
        case 1:
        {
            return ___ice_id(in, current);
        }
        case 2:
        {
            return ___ice_ids(in, current);
        }
        case 3:
        {
            return ___ice_isA(in, current);
        }
        case 4:
        {
            return ___ice_ping(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
Demo::CallbackReceiver::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
Demo::CallbackReceiver::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
Demo::CallbackReceiver::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type Demo::CallbackReceiver was not generated with stream support";
    throw ex;
}

void
Demo::CallbackReceiver::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type Demo::CallbackReceiver was not generated with stream support";
    throw ex;
}

void 
Demo::__patch__CallbackReceiverPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Demo::CallbackReceiverPtr* p = static_cast< ::Demo::CallbackReceiverPtr*>(__addr);
    assert(p);
    *p = ::Demo::CallbackReceiverPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Demo::CallbackReceiver::ice_staticId(), v->ice_id());
    }
}

bool
Demo::operator==(const ::Demo::CallbackReceiver& l, const ::Demo::CallbackReceiver& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Demo::operator<(const ::Demo::CallbackReceiver& l, const ::Demo::CallbackReceiver& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

::Ice::ObjectPtr
Demo::CallbackSender::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __Demo__CallbackSender_ids[2] =
{
    "::Demo::CallbackSender",
    "::Ice::Object"
};

bool
Demo::CallbackSender::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Demo__CallbackSender_ids, __Demo__CallbackSender_ids + 2, _s);
}

::std::vector< ::std::string>
Demo::CallbackSender::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Demo__CallbackSender_ids[0], &__Demo__CallbackSender_ids[2]);
}

const ::std::string&
Demo::CallbackSender::ice_id(const ::Ice::Current&) const
{
    return __Demo__CallbackSender_ids[0];
}

const ::std::string&
Demo::CallbackSender::ice_staticId()
{
    return __Demo__CallbackSender_ids[0];
}

::Ice::DispatchStatus
Demo::CallbackSender::___initiateCallback(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Demo::CallbackReceiverPrx proxy;
    ::Demo::__read(__is, proxy);
    __is->endReadEncaps();
    initiateCallback(proxy, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
Demo::CallbackSender::___shutdown(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    __inS.is()->skipEmptyEncaps();
    shutdown(__current);
    return ::Ice::DispatchOK;
}

static ::std::string __Demo__CallbackSender_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "initiateCallback",
    "shutdown"
};

::Ice::DispatchStatus
Demo::CallbackSender::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Demo__CallbackSender_all, __Demo__CallbackSender_all + 6, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Demo__CallbackSender_all)
    {
        case 0:
        {
            return ___ice_id(in, current);
        }
        case 1:
        {
            return ___ice_ids(in, current);
        }
        case 2:
        {
            return ___ice_isA(in, current);
        }
        case 3:
        {
            return ___ice_ping(in, current);
        }
        case 4:
        {
            return ___initiateCallback(in, current);
        }
        case 5:
        {
            return ___shutdown(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
Demo::CallbackSender::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
Demo::CallbackSender::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
Demo::CallbackSender::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type Demo::CallbackSender was not generated with stream support";
    throw ex;
}

void
Demo::CallbackSender::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type Demo::CallbackSender was not generated with stream support";
    throw ex;
}

void 
Demo::__patch__CallbackSenderPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Demo::CallbackSenderPtr* p = static_cast< ::Demo::CallbackSenderPtr*>(__addr);
    assert(p);
    *p = ::Demo::CallbackSenderPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Demo::CallbackSender::ice_staticId(), v->ice_id());
    }
}

bool
Demo::operator==(const ::Demo::CallbackSender& l, const ::Demo::CallbackSender& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Demo::operator<(const ::Demo::CallbackSender& l, const ::Demo::CallbackSender& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}
