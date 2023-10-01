#include "Stdafx.h"

int main(int argc, char* argv[])
{
	TVFactory* tvFactory = new TVFactory(); 
	SpecialRemote* remoteSony = new SpecialRemote(tvFactory);

	std::cout << "Connect your remote to the TV" << std::endl;
	remoteSony->setTV("Sony");

	remoteSony->on();
	remoteSony->up();
	remoteSony->down();
	remoteSony->off();

	GenericRemote* remoteLG = new GenericRemote(tvFactory); 
	std::cout << "Connect your remote to the TV" << std::endl;

	remoteLG->setTV("LG");
	remoteLG->on();
	remoteLG->nextChannel();
	remoteLG->prevChannel();
	remoteLG->off();

	return 0;
}