#include "Stdafx.h"

TV* TVFactory::getTV(std::string type)
{
	try {
		if (strstr(type.c_str(), "LG")) {
			return new LG();
		}
		else if (strstr(type.c_str(), "Sony")) {
			return new Sony();
		}
	}
	catch (const std::exception&) {
		std::cout << "Invalid TV Type...\n";
	}
	return nullptr;
}
