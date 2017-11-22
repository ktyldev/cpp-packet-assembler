#pragma once

#include <string>

class Packet
{
public:
	Packet(std::string &packet);
	int getId();
	int getMessageId();
	int getMessageLength();
	std::string getContent();
	~Packet();
private:
	int _id;
	int _messageId;
	int _messageLength;
	std::string _content;
};

