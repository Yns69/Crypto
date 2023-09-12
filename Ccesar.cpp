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
	//message.at(message.length()-1);


}

string Ccesar::getMessage()
{
	return message;
}

int Ccesar::initMessageFromFile(string fileName)
{
	/*cout << "fichier a ouvrir " << fileName << endl;*/
	ifstream monFlux(fileName); //1
	if (!monFlux.is_open()) { 
		cerr << "Erreur" << endl;
		return -1;
	}

	//getline(monFlux, message);
	while (getline(monFlux, message)) //2
	{
		cout << message << endl;
		//Et on l'affiche dans la console
		//Ou alors on fait quelque chose avec cette ligne
		//À vous de voir
	}
	monFlux.close();  //3
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



//
//if (message.empty()) {
//	cerr << "Erreur : Le fichier est vide." << endl;
//	return -1;
