#include <Ice/Ice.h>
#include <RequestReceiverI.h>

using namespace std;
using namespace Ice;


void RequestReceiverI::getCtx(const Current& c)
{
	_ctx = c.ctx;
}

unsigned int RequestReceiverI::parseCtx(const Current& c)
{
	string dst = c.ctx.first();
	string op  = c.ctx.second();

	unsigned int dst_code = 0;
	unsigned int op_code  = 0;
	unsigned int cmd = 0, cmd_index = 0;
	
	for(Context::const_iterator i = dst_map.begin();
			i != dst_map.end(); i++)
		if(dst == i.first())
		{
			dst_code = i.[dst];
			break;
		}
	for(Context::const_iterator i = op_map.begin();
			i != op_map.end(); i++)
		if(op == i.first())
		{
			op_code = i.[op];
			break;
		}
	
	cmd_index = dst_code << 8 | op_code;
	for(Context::const_iterator i = CMDMap.begin();
			i != CMDMap.end(); i++)
		if(cmd_index == i.first())
		{
			cmd = i.[cmd_index];
			break;
		}
	return cmd;
}

void RequestReceiverI::receiveRequest(const SRS::RequestSenderPrx& proxy, const Current& c)
{
	unsigned int cmd;
	//getCtx(ctx);
	
	cmd = parseCtx(c);
	switch(cmd)
	{
		case REQUEST_STREAM:
			func1(c);
			break;
		case REQUEST_STATUS:
			func2(c);
			break;
		default:
			func3(c);
			break;
	}

	try
	{
		proxy->getACKBack();
	}catch(const Exception& ex)
	{
		cout << ex << endl;
	}
}

void RequestReceiverI::shutdown(const Current& e)
{
#ifdef __DEBUG__
	cout << "shutting down the receiver ..." << endl;
#endif
	try
	{
		e.adapter->getCommunicator()->shutdown();
	}catch(const Exception& ex)
	{
		cout << ex << endl;
	}
}
	

void RequestReceiverI::func1(const Ice::Current& c)
{
}
void RequestReceiverI::func2(const Ice::Current& c)
{
}
void RequestReceiverI::func3(const Ice::Current& c)
{
}

