#include "Stdafx.h"

void RemoteControl::on()
{
	this->tv->on();
}
void RemoteControl::off()
{
	this->tv->off();
}
void RemoteControl::setChannel(int _channel)
{
	this->tv->tuneChannel(_channel);
}
int RemoteControl::getChannel()
{
	return this->tv->getchannel();
}
void RemoteControl::setTV(std::string type)
{
	try {
		tv = tvFactory.getTV(type);
	}
	catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}