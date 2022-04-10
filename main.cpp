#include <iostream>
#include <string>
#include "Encryptor.h"

int main()
{
	std::string text = "Hello World!";

	//Encrypt
	std::cout << BEncryptor::encryptor(text) << std::endl;

	//Decrypt
	std::cout << BEncryptor::decryptor(BEncryptor::encryptor(text));
}