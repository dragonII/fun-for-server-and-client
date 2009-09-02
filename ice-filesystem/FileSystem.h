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

#ifndef __FileSystem_h__
#define __FileSystem_h__

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
#include <Ice/UserExceptionFactory.h>
#include <Ice/FactoryTable.h>
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

namespace Filesystem
{

class Node;

class File;

class Directory;

}

}

namespace Filesystem
{

class Node;
bool operator==(const Node&, const Node&);
bool operator<(const Node&, const Node&);

class File;
bool operator==(const File&, const File&);
bool operator<(const File&, const File&);

class Directory;
bool operator==(const Directory&, const Directory&);
bool operator<(const Directory&, const Directory&);

}

namespace IceInternal
{

::Ice::Object* upCast(::Filesystem::Node*);
::IceProxy::Ice::Object* upCast(::IceProxy::Filesystem::Node*);

::Ice::Object* upCast(::Filesystem::File*);
::IceProxy::Ice::Object* upCast(::IceProxy::Filesystem::File*);

::Ice::Object* upCast(::Filesystem::Directory*);
::IceProxy::Ice::Object* upCast(::IceProxy::Filesystem::Directory*);

}

namespace Filesystem
{

typedef ::IceInternal::Handle< ::Filesystem::Node> NodePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Filesystem::Node> NodePrx;

void __read(::IceInternal::BasicStream*, NodePrx&);
void __patch__NodePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Filesystem::File> FilePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Filesystem::File> FilePrx;

void __read(::IceInternal::BasicStream*, FilePrx&);
void __patch__FilePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::Filesystem::Directory> DirectoryPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Filesystem::Directory> DirectoryPrx;

void __read(::IceInternal::BasicStream*, DirectoryPrx&);
void __patch__DirectoryPtr(void*, ::Ice::ObjectPtr&);

}

namespace Filesystem
{

class GenericError : public ::Ice::UserException
{
public:

    GenericError() {}
    explicit GenericError(const ::std::string&);
    virtual ~GenericError() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    ::std::string reason;

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

static GenericError __GenericError_init;

typedef ::std::vector< ::std::string> Lines;

typedef ::std::vector< ::Filesystem::NodePrx> NodeSeq;
void __writeNodeSeq(::IceInternal::BasicStream*, const ::Filesystem::NodePrx*, const ::Filesystem::NodePrx*);
void __readNodeSeq(::IceInternal::BasicStream*, NodeSeq&);

}

namespace IceProxy
{

namespace Filesystem
{

class Node : virtual public ::IceProxy::Ice::Object
{
public:

    ::std::string name()
    {
        return name(0);
    }
    ::std::string name(const ::Ice::Context& __ctx)
    {
        return name(&__ctx);
    }
    
private:

    ::std::string name(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<Node> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Node*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Node*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Node> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Node*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Node*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Node> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Node*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Node*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Node> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Node*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Node*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Node> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Node*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Node*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Node> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Node*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Node*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Node> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Node*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Node*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Node> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Node*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Node*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Node> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Node*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Node*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Node> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Node*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Node*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Node> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Node*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Node*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Node> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Node*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Node*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Node> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Node*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Node*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Node> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Node*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Node*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Node> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Node*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Node*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Node> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Node*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Node*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Node> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Node*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Node*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Node> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Node*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Node*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Node> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Node*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Node*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class File : virtual public ::IceProxy::Filesystem::Node
{
public:

    ::Filesystem::Lines read()
    {
        return read(0);
    }
    ::Filesystem::Lines read(const ::Ice::Context& __ctx)
    {
        return read(&__ctx);
    }
    
private:

    ::Filesystem::Lines read(const ::Ice::Context*);
    
public:

    void write(const ::Filesystem::Lines& text)
    {
        write(text, 0);
    }
    void write(const ::Filesystem::Lines& text, const ::Ice::Context& __ctx)
    {
        write(text, &__ctx);
    }
    
private:

    void write(const ::Filesystem::Lines&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<File> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<File*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<File*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<File> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<File*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<File*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<File> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<File*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<File*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<File> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<File*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<File*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<File> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<File*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<File*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<File> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<File*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<File*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<File> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<File*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<File*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<File> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<File*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<File*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<File> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<File*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<File*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<File> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<File*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<File*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<File> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<File*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<File*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<File> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<File*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<File*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<File> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<File*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<File*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<File> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<File*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<File*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<File> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<File*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<File*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<File> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<File*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<File*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<File> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<File*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<File*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<File> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<File*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<File*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<File> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<File*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<File*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class Directory : virtual public ::IceProxy::Filesystem::Node
{
public:

    ::Filesystem::NodeSeq list()
    {
        return list(0);
    }
    ::Filesystem::NodeSeq list(const ::Ice::Context& __ctx)
    {
        return list(&__ctx);
    }
    
private:

    ::Filesystem::NodeSeq list(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<Directory> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Directory*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Directory*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Directory> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Directory*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Directory*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Directory> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Directory*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Directory*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Directory> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Directory*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Directory*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Directory> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Directory*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Directory*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Directory> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Directory*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Directory*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Directory> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Directory*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Directory*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Directory> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Directory*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Directory*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Directory> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Directory*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Directory*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Directory> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Directory*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Directory*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Directory> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Directory*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Directory*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Directory> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Directory*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Directory*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Directory> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Directory*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Directory*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Directory> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Directory*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Directory*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Directory> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Directory*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Directory*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Directory> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Directory*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Directory*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Directory> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Directory*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Directory*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Directory> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Directory*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Directory*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Directory> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Directory*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Directory*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

namespace Filesystem
{

class Node : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::std::string name(const ::Ice::Context*) = 0;
};

class File : virtual public ::IceDelegate::Filesystem::Node
{
public:

    virtual ::Filesystem::Lines read(const ::Ice::Context*) = 0;

    virtual void write(const ::Filesystem::Lines&, const ::Ice::Context*) = 0;
};

class Directory : virtual public ::IceDelegate::Filesystem::Node
{
public:

    virtual ::Filesystem::NodeSeq list(const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace Filesystem
{

class Node : virtual public ::IceDelegate::Filesystem::Node,
             virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::std::string name(const ::Ice::Context*);
};

class File : virtual public ::IceDelegate::Filesystem::File,
             virtual public ::IceDelegateM::Filesystem::Node
{
public:

    virtual ::Filesystem::Lines read(const ::Ice::Context*);

    virtual void write(const ::Filesystem::Lines&, const ::Ice::Context*);
};

class Directory : virtual public ::IceDelegate::Filesystem::Directory,
                  virtual public ::IceDelegateM::Filesystem::Node
{
public:

    virtual ::Filesystem::NodeSeq list(const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace Filesystem
{

class Node : virtual public ::IceDelegate::Filesystem::Node,
             virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::std::string name(const ::Ice::Context*);
};

class File : virtual public ::IceDelegate::Filesystem::File,
             virtual public ::IceDelegateD::Filesystem::Node
{
public:

    virtual ::Filesystem::Lines read(const ::Ice::Context*);

    virtual void write(const ::Filesystem::Lines&, const ::Ice::Context*);
};

class Directory : virtual public ::IceDelegate::Filesystem::Directory,
                  virtual public ::IceDelegateD::Filesystem::Node
{
public:

    virtual ::Filesystem::NodeSeq list(const ::Ice::Context*);
};

}

}

namespace Filesystem
{

class Node : virtual public ::Ice::Object
{
public:

    typedef NodePrx ProxyType;
    typedef NodePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::std::string name(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___name(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class File : virtual public ::Filesystem::Node
{
public:

    typedef FilePrx ProxyType;
    typedef FilePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Filesystem::Lines read(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___read(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void write(const ::Filesystem::Lines&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___write(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class Directory : virtual public ::Filesystem::Node
{
public:

    typedef DirectoryPrx ProxyType;
    typedef DirectoryPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Filesystem::NodeSeq list(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___list(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

#endif
