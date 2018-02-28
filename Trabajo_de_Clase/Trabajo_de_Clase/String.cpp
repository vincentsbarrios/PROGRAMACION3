#include "String.h"
#include <iostream>
using namespace std;


String::String(string word)
{
	valor = word;
}

void String::setString(string _word) {
	valor = _word;
}

string String::getString() {
	return valor;
}

Tipo String::getTipo() {
	return T_String;
}

void String::imprimir() {
	cout << "Object: String [" << this->getString() << "]" << endl;
}

String::~String()
{
	cout << "Destruido" << endl;
}
