//d�claration de la classe CC�sar
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
	void cryptedMessage(unsigned short);
	void decryptedMessage(unsigned short);
	int saveMessage(string);

private:
	string message;
	string messageCrypted;
};

