#include "Encryptor.h"

std::string BEncryptor::encryptor(std::string text)
{

	for (int i = 0; i < text.length(); i++)
	{
		//Goes back 1 Char from the ASCII
		text[i] = text[i] - 1;
	}

	return text;
}

std::string BEncryptor::decryptor(std::string text)
{

	for (int i = 0; i < text.length(); i++)
	{
		//Goes up 1 Char from the ASCII
		text[i] = text[i] + 1;
	}

	return text;
}
