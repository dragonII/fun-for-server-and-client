#include <IceUtil/IceUtil.h>
#include <FilesystemI.h>

using namespace std;

std::string Filesystem::NodeI::name(const Ice::Current&)
{
    return _name;
}

Filesystem::NodeI::NodeI(const Ice::CommunicatorPtr& communicator,
                         const string& name,
                         const DirectoryIPtr& parent)
    : _name(name), _parent(parent)
{
    _id.name = parent ? IceUtil::generateUUID() : "RootDir";
}

void Filesystem::NodeI::activate(const Ice::ObjectAdapterPtr& a)
{
    NodePrx thisNode = NodePrx::uncheckedCast(a->add(this, _id));
    if(_parent)
    {
        _parent->addChild(thisNode);
    }
}

Filesystem::Lines Filesystem::FileI::read(const Ice::Current&)
{
    return _lines;
}

void Filesystem::FileI::write(const Filesystem::Lines& text, const Ice::Current&)
{
    _lines = text;
}

Filesystem::FileI::FileI(const Ice::CommunicatorPtr& communicator,
                         const string& name,
                         const DirectoryIPtr& parent)
    : NodeI(communicator, name, parent)
{
}

Filesystem::NodeSeq Filesystem::DirectoryI::list(const Ice::Current& c)
{
    return _contents;
}

Filesystem::DirectoryI::DirectoryI(const Ice::CommunicatorPtr& communicator,
                                   const string& name,
                                   const DirectoryIPtr& parent)
    : NodeI(communicator, name, parent)
{
}

void Filesystem::DirectoryI::addChild(const NodePrx& child)
{
    _contents.push_back(child);
}
