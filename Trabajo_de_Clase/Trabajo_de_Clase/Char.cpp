#include "Char.h"
#include <iostream>
using namespace std;


Char::Char(char l)
{
	valor = l;
}

void Char::setChar(char x) {
	valor = x;
}

char Char::getChar() {
	return valor;
}

Tipo Char::getTipo() {
	return T_Char;
}

void Char::imprimir() {
	cout << "Object: Char [" << this->getChar() << "]" << endl;
}


Char::~Char()
{
	cout << "Destruido" << endl;
}
