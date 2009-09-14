#include <piece_server.h>

int main(int argc, char* argv[])
{
	IabServer* n_server = new IabServer;
	n_server->initialize(argc, argv);
	n_server->start();
}
