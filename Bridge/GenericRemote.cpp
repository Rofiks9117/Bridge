#include "Stdafx.h"

GenericRemote::GenericRemote(TVFactory* tvFactory)
{
	//super(tvFactory); ???????
}
void GenericRemote::nextChannel() {
	int _channel = this->getChannel();
	this->setChannel(_channel + 1);
}
void GenericRemote::prevChannel() {
	int _channel = this->getChannel();
	this->setChannel(_channel - 1);
}