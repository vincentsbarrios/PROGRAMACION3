#include "Integer.h"
#include <iostream>
using namespace std;


Integer::Integer(int num)
{
	valor = num;
}

void Integer::setInt(int x) {
	valor = x;
}

int Integer::getInt() {
	return valor;
}

Tipo Integer::getTipo() {
	return T_Int;
}

void Integer::imprimir() {
	cout << "Object: Integer [" << this->getInt() << "]" << endl;
}

Integer::~Integer()
{
	cout << "Destruido" << endl;
}
