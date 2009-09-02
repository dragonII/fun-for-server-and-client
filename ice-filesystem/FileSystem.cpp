// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `FileSystem.ice'

#include <FileSystem.h>
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

static const ::std::string __Filesystem__Node__name_name = "name";

static const ::std::string __Filesystem__File__read_name = "read";

static const ::std::string __Filesystem__File__write_name = "write";

static const ::std::string __Filesystem__Directory__list_name = "list";

::Ice::Object* IceInternal::upCast(::Filesystem::Node* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Filesystem::Node* p) { return p; }

::Ice::Object* IceInternal::upCast(::Filesystem::File* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Filesystem::File* p) { return p; }

::Ice::Object* IceInternal::upCast(::Filesystem::Directory* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Filesystem::Directory* p) { return p; }

void
Filesystem::__read(::IceInternal::BasicStream* __is, ::Filesystem::NodePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Filesystem::Node;
        v->__copyFrom(proxy);
    }
}

void
Filesystem::__read(::IceInternal::BasicStream* __is, ::Filesystem::FilePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Filesystem::File;
        v->__copyFrom(proxy);
    }
}

void
Filesystem::__read(::IceInternal::BasicStream* __is, ::Filesystem::DirectoryPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Filesystem::Directory;
        v->__copyFrom(proxy);
    }
}

Filesystem::GenericError::GenericError(const ::std::string& __ice_reason) :
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    UserException(),
#else
    ::Ice::UserException(),
#endif
    reason(__ice_reason)
{
}

Filesystem::GenericError::~GenericError() throw()
{
}

static const char* __Filesystem__GenericError_name = "Filesystem::GenericError";

::std::string
Filesystem::GenericError::ice_name() const
{
    return __Filesystem__GenericError_name;
}

::Ice::Exception*
Filesystem::GenericError::ice_clone() const
{
    return new GenericError(*this);
}

void
Filesystem::GenericError::ice_throw() const
{
    throw *this;
}

void
Filesystem::GenericError::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(::std::string("::Filesystem::GenericError"), false);
    __os->startWriteSlice();
    __os->write(reason);
    __os->endWriteSlice();
}

void
Filesystem::GenericError::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->read(myId, false);
    }
    __is->startReadSlice();
    __is->read(reason);
    __is->endReadSlice();
}

void
Filesystem::GenericError::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "exception Filesystem::GenericError was not generated with stream support";
    throw ex;
}

void
Filesystem::GenericError::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "exception Filesystem::GenericError was not generated with stream support";
    throw ex;
}

struct __F__Filesystem__GenericError : public ::IceInternal::UserExceptionFactory
{
    virtual void
    createAndThrow()
    {
        throw ::Filesystem::GenericError();
    }
};

static ::IceInternal::UserExceptionFactoryPtr __F__Filesystem__GenericError__Ptr = new __F__Filesystem__GenericError;

const ::IceInternal::UserExceptionFactoryPtr&
Filesystem::GenericError::ice_factory()
{
    return __F__Filesystem__GenericError__Ptr;
}

class __F__Filesystem__GenericError__Init
{
public:

    __F__Filesystem__GenericError__Init()
    {
        ::IceInternal::factoryTable->addExceptionFactory("::Filesystem::GenericError", ::Filesystem::GenericError::ice_factory());
    }

    ~__F__Filesystem__GenericError__Init()
    {
        ::IceInternal::factoryTable->removeExceptionFactory("::Filesystem::GenericError");
    }
};

static __F__Filesystem__GenericError__Init __F__Filesystem__GenericError__i;

#ifdef __APPLE__
extern "C" { void __F__Filesystem__GenericError__initializer() {} }
#endif

void
Filesystem::__writeNodeSeq(::IceInternal::BasicStream* __os, const ::Filesystem::NodePrx* begin, const ::Filesystem::NodePrx* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        __os->write(::Ice::ObjectPrx(::IceInternal::upCast(begin[i].get())));
    }
}

void
Filesystem::__readNodeSeq(::IceInternal::BasicStream* __is, ::Filesystem::NodeSeq& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 2);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        ::Filesystem::__read(__is, v[i]);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

::std::string
IceProxy::Filesystem::Node::name(const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__Filesystem__Node__name_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::Filesystem::Node* __del = dynamic_cast< ::IceDelegate::Filesystem::Node*>(__delBase.get());
            return __del->name(__ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapperRelaxed(__delBase, __ex, 0, __cnt);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

const ::std::string&
IceProxy::Filesystem::Node::ice_staticId()
{
    return ::Filesystem::Node::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::Filesystem::Node::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::Filesystem::Node);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::Filesystem::Node::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::Filesystem::Node);
}

::IceProxy::Ice::Object*
IceProxy::Filesystem::Node::__newInstance() const
{
    return new Node;
}

::Filesystem::Lines
IceProxy::Filesystem::File::read(const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__Filesystem__File__read_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::Filesystem::File* __del = dynamic_cast< ::IceDelegate::Filesystem::File*>(__delBase.get());
            return __del->read(__ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapperRelaxed(__delBase, __ex, 0, __cnt);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::Filesystem::File::write(const ::Filesystem::Lines& text, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__Filesystem__File__write_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::Filesystem::File* __del = dynamic_cast< ::IceDelegate::Filesystem::File*>(__delBase.get());
            __del->write(text, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapperRelaxed(__delBase, __ex, 0, __cnt);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

const ::std::string&
IceProxy::Filesystem::File::ice_staticId()
{
    return ::Filesystem::File::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::Filesystem::File::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::Filesystem::File);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::Filesystem::File::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::Filesystem::File);
}

::IceProxy::Ice::Object*
IceProxy::Filesystem::File::__newInstance() const
{
    return new File;
}

::Filesystem::NodeSeq
IceProxy::Filesystem::Directory::list(const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__Filesystem__Directory__list_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::Filesystem::Directory* __del = dynamic_cast< ::IceDelegate::Filesystem::Directory*>(__delBase.get());
            return __del->list(__ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapperRelaxed(__delBase, __ex, 0, __cnt);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

const ::std::string&
IceProxy::Filesystem::Directory::ice_staticId()
{
    return ::Filesystem::Directory::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::Filesystem::Directory::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::Filesystem::Directory);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::Filesystem::Directory::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::Filesystem::Directory);
}

::IceProxy::Ice::Object*
IceProxy::Filesystem::Directory::__newInstance() const
{
    return new Directory;
}

::std::string
IceDelegateM::Filesystem::Node::name(const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __Filesystem__Node__name_name, ::Ice::Idempotent, __context);
    bool __ok = __og.invoke();
    ::std::string __ret;
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
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __is->read(__ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Filesystem::Lines
IceDelegateM::Filesystem::File::read(const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __Filesystem__File__read_name, ::Ice::Idempotent, __context);
    bool __ok = __og.invoke();
    ::Filesystem::Lines __ret;
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
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __is->read(__ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

void
IceDelegateM::Filesystem::File::write(const ::Filesystem::Lines& text, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __Filesystem__File__write_name, ::Ice::Idempotent, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        if(text.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&text[0], &text[0] + text.size());
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Filesystem::GenericError&)
            {
                throw;
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

::Filesystem::NodeSeq
IceDelegateM::Filesystem::Directory::list(const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __Filesystem__Directory__list_name, ::Ice::Idempotent, __context);
    bool __ok = __og.invoke();
    ::Filesystem::NodeSeq __ret;
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
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        ::Filesystem::__readNodeSeq(__is, __ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::std::string
IceDelegateD::Filesystem::Node::name(const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::std::string& __result, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::Filesystem::Node* servant = dynamic_cast< ::Filesystem::Node*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->name(_current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::std::string& _result;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __Filesystem__Node__name_name, ::Ice::Idempotent, __context);
    ::std::string __result;
    try
    {
        _DirectI __direct(__result, __current);
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
    return __result;
}

::Filesystem::Lines
IceDelegateD::Filesystem::File::read(const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Filesystem::Lines& __result, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::Filesystem::File* servant = dynamic_cast< ::Filesystem::File*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->read(_current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Filesystem::Lines& _result;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __Filesystem__File__read_name, ::Ice::Idempotent, __context);
    ::Filesystem::Lines __result;
    try
    {
        _DirectI __direct(__result, __current);
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
    return __result;
}

void
IceDelegateD::Filesystem::File::write(const ::Filesystem::Lines& text, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::Filesystem::Lines& text, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_text(text)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::Filesystem::File* servant = dynamic_cast< ::Filesystem::File*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            try
            {
                servant->write(_m_text, _current);
                return ::Ice::DispatchOK;
            }
            catch(const ::Ice::UserException& __ex)
            {
                setUserException(__ex);
                return ::Ice::DispatchUserException;
            }
        }
        
    private:
        
        const ::Filesystem::Lines& _m_text;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __Filesystem__File__write_name, ::Ice::Idempotent, __context);
    try
    {
        _DirectI __direct(text, __current);
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
    catch(const ::Filesystem::GenericError&)
    {
        throw;
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

::Filesystem::NodeSeq
IceDelegateD::Filesystem::Directory::list(const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Filesystem::NodeSeq& __result, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::Filesystem::Directory* servant = dynamic_cast< ::Filesystem::Directory*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->list(_current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Filesystem::NodeSeq& _result;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __Filesystem__Directory__list_name, ::Ice::Idempotent, __context);
    ::Filesystem::NodeSeq __result;
    try
    {
        _DirectI __direct(__result, __current);
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
    return __result;
}

::Ice::ObjectPtr
Filesystem::Node::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __Filesystem__Node_ids[2] =
{
    "::Filesystem::Node",
    "::Ice::Object"
};

bool
Filesystem::Node::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Filesystem__Node_ids, __Filesystem__Node_ids + 2, _s);
}

::std::vector< ::std::string>
Filesystem::Node::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Filesystem__Node_ids[0], &__Filesystem__Node_ids[2]);
}

const ::std::string&
Filesystem::Node::ice_id(const ::Ice::Current&) const
{
    return __Filesystem__Node_ids[0];
}

const ::std::string&
Filesystem::Node::ice_staticId()
{
    return __Filesystem__Node_ids[0];
}

::Ice::DispatchStatus
Filesystem::Node::___name(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Idempotent, __current.mode);
    __inS.is()->skipEmptyEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string __ret = name(__current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}

static ::std::string __Filesystem__Node_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "name"
};

::Ice::DispatchStatus
Filesystem::Node::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Filesystem__Node_all, __Filesystem__Node_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Filesystem__Node_all)
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
            return ___name(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
Filesystem::Node::__write(::IceInternal::BasicStream* __os) const
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
Filesystem::Node::__read(::IceInternal::BasicStream* __is, bool __rid)
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
Filesystem::Node::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type Filesystem::Node was not generated with stream support";
    throw ex;
}

void
Filesystem::Node::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type Filesystem::Node was not generated with stream support";
    throw ex;
}

void 
Filesystem::__patch__NodePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Filesystem::NodePtr* p = static_cast< ::Filesystem::NodePtr*>(__addr);
    assert(p);
    *p = ::Filesystem::NodePtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Filesystem::Node::ice_staticId(), v->ice_id());
    }
}

bool
Filesystem::operator==(const ::Filesystem::Node& l, const ::Filesystem::Node& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Filesystem::operator<(const ::Filesystem::Node& l, const ::Filesystem::Node& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

::Ice::ObjectPtr
Filesystem::File::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __Filesystem__File_ids[3] =
{
    "::Filesystem::File",
    "::Filesystem::Node",
    "::Ice::Object"
};

bool
Filesystem::File::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Filesystem__File_ids, __Filesystem__File_ids + 3, _s);
}

::std::vector< ::std::string>
Filesystem::File::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Filesystem__File_ids[0], &__Filesystem__File_ids[3]);
}

const ::std::string&
Filesystem::File::ice_id(const ::Ice::Current&) const
{
    return __Filesystem__File_ids[0];
}

const ::std::string&
Filesystem::File::ice_staticId()
{
    return __Filesystem__File_ids[0];
}

::Ice::DispatchStatus
Filesystem::File::___read(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Idempotent, __current.mode);
    __inS.is()->skipEmptyEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Filesystem::Lines __ret = read(__current);
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&__ret[0], &__ret[0] + __ret.size());
    }
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
Filesystem::File::___write(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Idempotent, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Filesystem::Lines text;
    __is->read(text);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        write(text, __current);
    }
    catch(const ::Filesystem::GenericError& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}

static ::std::string __Filesystem__File_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "name",
    "read",
    "write"
};

::Ice::DispatchStatus
Filesystem::File::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Filesystem__File_all, __Filesystem__File_all + 7, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Filesystem__File_all)
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
            return ___name(in, current);
        }
        case 5:
        {
            return ___read(in, current);
        }
        case 6:
        {
            return ___write(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
Filesystem::File::__write(::IceInternal::BasicStream* __os) const
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
Filesystem::File::__read(::IceInternal::BasicStream* __is, bool __rid)
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
Filesystem::File::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type Filesystem::File was not generated with stream support";
    throw ex;
}

void
Filesystem::File::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type Filesystem::File was not generated with stream support";
    throw ex;
}

void 
Filesystem::__patch__FilePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Filesystem::FilePtr* p = static_cast< ::Filesystem::FilePtr*>(__addr);
    assert(p);
    *p = ::Filesystem::FilePtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Filesystem::File::ice_staticId(), v->ice_id());
    }
}

bool
Filesystem::operator==(const ::Filesystem::File& l, const ::Filesystem::File& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Filesystem::operator<(const ::Filesystem::File& l, const ::Filesystem::File& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

::Ice::ObjectPtr
Filesystem::Directory::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __Filesystem__Directory_ids[3] =
{
    "::Filesystem::Directory",
    "::Filesystem::Node",
    "::Ice::Object"
};

bool
Filesystem::Directory::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Filesystem__Directory_ids, __Filesystem__Directory_ids + 3, _s);
}

::std::vector< ::std::string>
Filesystem::Directory::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Filesystem__Directory_ids[0], &__Filesystem__Directory_ids[3]);
}

const ::std::string&
Filesystem::Directory::ice_id(const ::Ice::Current&) const
{
    return __Filesystem__Directory_ids[0];
}

const ::std::string&
Filesystem::Directory::ice_staticId()
{
    return __Filesystem__Directory_ids[0];
}

::Ice::DispatchStatus
Filesystem::Directory::___list(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Idempotent, __current.mode);
    __inS.is()->skipEmptyEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Filesystem::NodeSeq __ret = list(__current);
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::Filesystem::__writeNodeSeq(__os, &__ret[0], &__ret[0] + __ret.size());
    }
    return ::Ice::DispatchOK;
}

static ::std::string __Filesystem__Directory_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "list",
    "name"
};

::Ice::DispatchStatus
Filesystem::Directory::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Filesystem__Directory_all, __Filesystem__Directory_all + 6, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Filesystem__Directory_all)
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
            return ___list(in, current);
        }
        case 5:
        {
            return ___name(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
Filesystem::Directory::__write(::IceInternal::BasicStream* __os) const
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
Filesystem::Directory::__read(::IceInternal::BasicStream* __is, bool __rid)
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
Filesystem::Directory::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type Filesystem::Directory was not generated with stream support";
    throw ex;
}

void
Filesystem::Directory::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type Filesystem::Directory was not generated with stream support";
    throw ex;
}

void 
Filesystem::__patch__DirectoryPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Filesystem::DirectoryPtr* p = static_cast< ::Filesystem::DirectoryPtr*>(__addr);
    assert(p);
    *p = ::Filesystem::DirectoryPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Filesystem::Directory::ice_staticId(), v->ice_id());
    }
}

bool
Filesystem::operator==(const ::Filesystem::Directory& l, const ::Filesystem::Directory& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Filesystem::operator<(const ::Filesystem::Directory& l, const ::Filesystem::Directory& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}
