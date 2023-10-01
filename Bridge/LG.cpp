#include "Stdafx.h"

void LG::on()
{
	std::cout << "Turning on the LG TV" << std::endl;
}

void LG::off()
{
	std::cout << "Turning off the LG TV" << std::endl;
}

void LG::tuneChannel(int _channel)
{
	this->channel = _channel;
	std::cout << "Set the LG TV Channel to " << this->channel << std::endl;
}

int LG::getchannel()
{
	return this->channel;
}
