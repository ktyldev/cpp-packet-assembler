#include "stdafx.h"
#include "Packet.h"

#include <sstream>
#include <iostream>

Packet::Packet(std::string &packetString)
{
	std::stringstream(packetString.substr(0, 4)) >> _messageId;
	std::stringstream(packetString.substr(8, 4)) >> _id;
	std::stringstream(packetString.substr(12, 4)) >> _messageLength;
	_content = packetString.substr(16, packetString.length());
}

int Packet::getId()
{
	return _id;
}

int Packet::getMessageId()
{
	return _messageId;
}

int Packet::getMessageLength()
{
	return _messageLength;
}

std::string Packet::getContent()
{
	return _content;
}


Packet::~Packet()
{
}
