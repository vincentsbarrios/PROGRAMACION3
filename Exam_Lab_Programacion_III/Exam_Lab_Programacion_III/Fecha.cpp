#include "Fecha.h"
#include <iostream>

using namespace std;

Fecha::Fecha()
{
	dia = 1;
	mes = 1;
	anio = 2018;
}


void Fecha::setDia(int _dia) {
	dia = _dia;
}
void Fecha::setMes(int _mes) {
	mes = _mes;
}
void Fecha::setAnio(int _anio) {
	anio = _anio;
}

int Fecha::getDia() {
	return dia;
}
int Fecha::getMes() {
	return mes;
}
int Fecha::getAnio() {
	return anio;
}

void Fecha::imprimirFecha() {
	cout << getDia() << "-" << getMes() << "-" << getAnio() << endl;
}
