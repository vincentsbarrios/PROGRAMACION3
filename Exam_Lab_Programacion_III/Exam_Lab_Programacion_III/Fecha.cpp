#include "Fecha.h"
#include <iostream>

using namespace std;

Fecha::Fecha(int dia,int mes,int anio)
{
	setDia(dia);
	setMes(mes);
	setAnio(anio);
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
