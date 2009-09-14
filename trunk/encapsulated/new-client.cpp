#include <piece_client.h>

int main(int argc, char* argv[])
{
	Iabs* n_client = new Iabs;
	
	n_client->open(argc, argv);
	n_client->doit();
	n_client->close();

	return EXIT_SUCCESS;
}
