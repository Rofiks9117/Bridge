#include "Stdafx.h"

void Sony::on()
{
	std::cout << "Turning on the Sony TV" << std::endl;
}

void Sony::off()
{
	std::cout << "Turning off the Sony TV" << std::endl;
}

void Sony::tuneChannel(int _channel)
{
	channel = _channel;
	std::cout << "Set the Sony TV Channel to " << channel << std::endl;
}

int Sony::getchannel()
{
	return channel;
}
