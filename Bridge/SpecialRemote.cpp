#include "Stdafx.h"

SpecialRemote::SpecialRemote(TVFactory* tvFactory)
{
	//super(tvFactory); ???????
}
void SpecialRemote::up() {
	int _channel = this->getChannel();
	this->setChannel(_channel + 1);
}
void SpecialRemote::down() {
	int _channel = this->getChannel();
	this->setChannel(_channel - 1);
}