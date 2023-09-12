//déclaration de la classe CCésar
#include <iostream>
#include <string>
using namespace std;




class Ccesar
{
public:
	Ccesar();
	~Ccesar();
	void afficheMessage(void);
	string getMessage(void);
	void setMessage(string);
	int initMessageFromFile(string);
	void cryptedMessage(unsigned short);
	void decryptedMessage(unsigned short);
	int saveMessage(string);

private:
	string message;
	string messageCrypted;
};

