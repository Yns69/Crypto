//déclaration de la classe CCésar
#include <iostream>
#include <fstream>
#include <string>
using namespace std;




class Ccesar
{
public:
	Ccesar();
	~Ccesar();
	void afficheMessage();
	string getMessage();
	void setMessage(string);
	int initMessageFromFile(string file);
	void cryptedMessage(unsigned short cle);
	void decryptedMessage(unsigned short);
	int saveMessage(string file2);

private:
	string message;
	string messageCrypted;
};

