// César.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "Ccesar.h"

using namespace std;

int main()
{
    string m;
    Ccesar c;
    c.afficheMessage();
    cout << "Saisir le message a afficher " << endl;
    getline(cin, m);
    c.setMessage(m);
    m = c.getMessage();
    //c.initMessageFromFile("Exemple2.txt");
    //c.cryptedMessage(2);
    c.decryptedMessage(2);
    
    //c.saveMessage("Exemple3.txt");
    //cout << m << endl;
}
