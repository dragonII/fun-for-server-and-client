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

#include <RequestAndACK.h>
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

static const ::std::string __SRS__RequestSender__getACKBack_name = "getACKBack";

static const ::std::string __SRS__RequestReceiver__receiveRequest_name = "receiveRequest";

static const ::std::string __SRS__RequestReceiver__shutdown_name = "shutdown";

::Ice::Object* IceInternal::upCast(::SRS::RequestSender* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::SRS::RequestSender* p) { return p; }

::Ice::Object* IceInternal::upCast(::SRS::RequestReceiver* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::SRS::RequestReceiver* p) { return p; }

void
SRS::__read(::IceInternal::BasicStream* __is, ::SRS::RequestSenderPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::SRS::RequestSender;
        v->__copyFrom(proxy);
    }
}

void
SRS::__read(::IceInternal::BasicStream* __is, ::SRS::RequestReceiverPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::SRS::RequestReceiver;
        v->__copyFrom(proxy);
    }
}

void
SRS::__writeCMDMap(::IceInternal::BasicStream* __os, const ::SRS::CMDMap& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::SRS::CMDMap::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(p->second);
    }
}

void
SRS::__readCMDMap(::IceInternal::BasicStream* __is, ::SRS::CMDMap& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::std::string, ::Ice::Int> pair;
        __is->read(const_cast< ::std::string&>(pair.first));
        ::SRS::CMDMap::iterator __i = v.insert(v.end(), pair);
        __is->read(__i->second);
    }
}

void
IceProxy::SRS::RequestSender::getACKBack(const ::Ice::Context* __ctx)
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
            ::IceDelegate::SRS::RequestSender* __del = dynamic_cast< ::IceDelegate::SRS::RequestSender*>(__delBase.get());
            __del->getACKBack(__ctx);
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
IceProxy::SRS::RequestSender::ice_staticId()
{
    return ::SRS::RequestSender::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::SRS::RequestSender::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::SRS::RequestSender);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::SRS::RequestSender::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::SRS::RequestSender);
}

::IceProxy::Ice::Object*
IceProxy::SRS::RequestSender::__newInstance() const
{
    return new RequestSender;
}

void
IceProxy::SRS::RequestReceiver::receiveRequest(const ::SRS::RequestSenderPrx& proxy, const ::Ice::Context* __ctx)
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
            ::IceDelegate::SRS::RequestReceiver* __del = dynamic_cast< ::IceDelegate::SRS::RequestReceiver*>(__delBase.get());
            __del->receiveRequest(proxy, __ctx);
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
IceProxy::SRS::RequestReceiver::shutdown(const ::Ice::Context* __ctx)
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
            ::IceDelegate::SRS::RequestReceiver* __del = dynamic_cast< ::IceDelegate::SRS::RequestReceiver*>(__delBase.get());
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
IceProxy::SRS::RequestReceiver::ice_staticId()
{
    return ::SRS::RequestReceiver::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::SRS::RequestReceiver::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::SRS::RequestReceiver);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::SRS::RequestReceiver::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::SRS::RequestReceiver);
}

::IceProxy::Ice::Object*
IceProxy::SRS::RequestReceiver::__newInstance() const
{
    return new RequestReceiver;
}

void
IceDelegateM::SRS::RequestSender::getACKBack(const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __SRS__RequestSender__getACKBack_name, ::Ice::Normal, __context);
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
IceDelegateM::SRS::RequestReceiver::receiveRequest(const ::SRS::RequestSenderPrx& proxy, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __SRS__RequestReceiver__receiveRequest_name, ::Ice::Normal, __context);
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
IceDelegateM::SRS::RequestReceiver::shutdown(const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __SRS__RequestReceiver__shutdown_name, ::Ice::Normal, __context);
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
IceDelegateD::SRS::RequestSender::getACKBack(const ::Ice::Context* __context)
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
            ::SRS::RequestSender* servant = dynamic_cast< ::SRS::RequestSender*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->getACKBack(_current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __SRS__RequestSender__getACKBack_name, ::Ice::Normal, __context);
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
IceDelegateD::SRS::RequestReceiver::receiveRequest(const ::SRS::RequestSenderPrx& proxy, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::SRS::RequestSenderPrx& proxy, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_proxy(proxy)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::SRS::RequestReceiver* servant = dynamic_cast< ::SRS::RequestReceiver*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->receiveRequest(_m_proxy, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::SRS::RequestSenderPrx& _m_proxy;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __SRS__RequestReceiver__receiveRequest_name, ::Ice::Normal, __context);
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
IceDelegateD::SRS::RequestReceiver::shutdown(const ::Ice::Context* __context)
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
            ::SRS::RequestReceiver* servant = dynamic_cast< ::SRS::RequestReceiver*>(object);
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
    __initCurrent(__current, __SRS__RequestReceiver__shutdown_name, ::Ice::Normal, __context);
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
SRS::RequestSender::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __SRS__RequestSender_ids[2] =
{
    "::Ice::Object",
    "::SRS::RequestSender"
};

bool
SRS::RequestSender::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__SRS__RequestSender_ids, __SRS__RequestSender_ids + 2, _s);
}

::std::vector< ::std::string>
SRS::RequestSender::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__SRS__RequestSender_ids[0], &__SRS__RequestSender_ids[2]);
}

const ::std::string&
SRS::RequestSender::ice_id(const ::Ice::Current&) const
{
    return __SRS__RequestSender_ids[1];
}

const ::std::string&
SRS::RequestSender::ice_staticId()
{
    return __SRS__RequestSender_ids[1];
}

::Ice::DispatchStatus
SRS::RequestSender::___getACKBack(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    __inS.is()->skipEmptyEncaps();
    getACKBack(__current);
    return ::Ice::DispatchOK;
}

static ::std::string __SRS__RequestSender_all[] =
{
    "getACKBack",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::Ice::DispatchStatus
SRS::RequestSender::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__SRS__RequestSender_all, __SRS__RequestSender_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __SRS__RequestSender_all)
    {
        case 0:
        {
            return ___getACKBack(in, current);
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
SRS::RequestSender::__write(::IceInternal::BasicStream* __os) const
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
SRS::RequestSender::__read(::IceInternal::BasicStream* __is, bool __rid)
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
SRS::RequestSender::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type SRS::RequestSender was not generated with stream support";
    throw ex;
}

void
SRS::RequestSender::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type SRS::RequestSender was not generated with stream support";
    throw ex;
}

void 
SRS::__patch__RequestSenderPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::SRS::RequestSenderPtr* p = static_cast< ::SRS::RequestSenderPtr*>(__addr);
    assert(p);
    *p = ::SRS::RequestSenderPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::SRS::RequestSender::ice_staticId(), v->ice_id());
    }
}

bool
SRS::operator==(const ::SRS::RequestSender& l, const ::SRS::RequestSender& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
SRS::operator<(const ::SRS::RequestSender& l, const ::SRS::RequestSender& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

::Ice::ObjectPtr
SRS::RequestReceiver::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __SRS__RequestReceiver_ids[2] =
{
    "::Ice::Object",
    "::SRS::RequestReceiver"
};

bool
SRS::RequestReceiver::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__SRS__RequestReceiver_ids, __SRS__RequestReceiver_ids + 2, _s);
}

::std::vector< ::std::string>
SRS::RequestReceiver::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__SRS__RequestReceiver_ids[0], &__SRS__RequestReceiver_ids[2]);
}

const ::std::string&
SRS::RequestReceiver::ice_id(const ::Ice::Current&) const
{
    return __SRS__RequestReceiver_ids[1];
}

const ::std::string&
SRS::RequestReceiver::ice_staticId()
{
    return __SRS__RequestReceiver_ids[1];
}

::Ice::DispatchStatus
SRS::RequestReceiver::___receiveRequest(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::SRS::RequestSenderPrx proxy;
    ::SRS::__read(__is, proxy);
    __is->endReadEncaps();
    receiveRequest(proxy, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
SRS::RequestReceiver::___shutdown(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    __inS.is()->skipEmptyEncaps();
    shutdown(__current);
    return ::Ice::DispatchOK;
}

static ::std::string __SRS__RequestReceiver_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "receiveRequest",
    "shutdown"
};

::Ice::DispatchStatus
SRS::RequestReceiver::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__SRS__RequestReceiver_all, __SRS__RequestReceiver_all + 6, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __SRS__RequestReceiver_all)
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
            return ___receiveRequest(in, current);
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
SRS::RequestReceiver::__write(::IceInternal::BasicStream* __os) const
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
SRS::RequestReceiver::__read(::IceInternal::BasicStream* __is, bool __rid)
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
SRS::RequestReceiver::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type SRS::RequestReceiver was not generated with stream support";
    throw ex;
}

void
SRS::RequestReceiver::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type SRS::RequestReceiver was not generated with stream support";
    throw ex;
}

void 
SRS::__patch__RequestReceiverPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::SRS::RequestReceiverPtr* p = static_cast< ::SRS::RequestReceiverPtr*>(__addr);
    assert(p);
    *p = ::SRS::RequestReceiverPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::SRS::RequestReceiver::ice_staticId(), v->ice_id());
    }
}

bool
SRS::operator==(const ::SRS::RequestReceiver& l, const ::SRS::RequestReceiver& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
SRS::operator<(const ::SRS::RequestReceiver& l, const ::SRS::RequestReceiver& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}
