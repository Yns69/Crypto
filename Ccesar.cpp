//définition de classe Ccésar
#include "Ccesar.h"

Ccesar::Ccesar()
{
	cout << "je suis dans le constructeur de la classe ccesar" << endl;
	/*message = "attaque";*/
}



void Ccesar::afficheMessage()
{
	cout << message << endl;
}

void Ccesar::setMessage(string param_s)
{
	message = param_s;
	int taille = size(message);
	char dernier =message.back();
	cout << "la taille de la chaine est de " << taille << "et le dernier caractere est " << dernier << endl;


}

string Ccesar::getMessage(void)
{
	return message;
}

int Ccesar::initMessageFromFile(string)
{
	return 0;
}

void Ccesar::cryptedMessage(unsigned short)
{
}

void Ccesar::decryptedMessage(unsigned short)
{
}

int Ccesar::saveMessage(string)
{
	return 0;
}




Ccesar::~Ccesar()
{
	cout << "je suis dans le déstructeur de la classe ccesar" << endl;
}




