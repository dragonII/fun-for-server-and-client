#include <Ice/Ice.h>
#include "FileSystem.h"
#include <iostream>
#include <iterator>

using namespace std;
using namespace Filesystem;

static void listRecursive(const DirectoryPrx& dir, int depth = 0)
{
    string indent(++depth, '\t');
    NodeSeq contents = dir->list();

    for(NodeSeq::const_iterator i = contents.begin(); i != contents.end(); ++i)
    {
        DirectoryPrx dir = DirectoryPrx::checkedCast(*i);
        FilePrx file = FilePrx::uncheckedCast(*i);
        cout << indent << (*i)->name() << (dir ? " (directory):" : " (file):") << endl;
        if(dir)
        {
            listRecursive(dir, depth);
        }else
        {
            Lines text = file->read();
            for(Lines::const_iterator j = text.begin(); j != text.end(); ++j)
            {
                cout << indent << "\t" << *j << endl;
            }
        }
    }

}

int main(int argc, char* argv[])
{
    int status = 0;
    Ice::CommunicatorPtr ic;
    try
    {
        ic = Ice::initialize(argc, argv);

        Ice::ObjectPrx base = ic->stringToProxy("RootDir:default -p 10000");
        if(!base)
            throw "Could not create proxy";

        DirectoryPrx rootDir = DirectoryPrx::checkedCast(base);
        if(!rootDir)
            throw "Invalid proxy";

        cout << "Contents of root directory:" << endl;
        listRecursive(rootDir);
    }catch(const Ice::Exception& ex)
    {
        cerr << ex << endl;
        status = 1;
    }catch(const char* msg)
    {
        cerr << msg << endl;
        status = 1;
    }

    if(ic)
        ic->destroy();
    return status;
}
