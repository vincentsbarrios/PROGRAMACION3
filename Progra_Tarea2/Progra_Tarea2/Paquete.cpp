#include "Paquetas.h"
#include <string>

using namespace std;

Paquete::Paquete(string n, string d, string c, string e, string cp, string dep, double p, double cot) {
	nombre = n;
	direccion = d;
	ciudad = c;
	estado = e;
	codigo_postal = cp;
	destinatario = dep;

	if (p >= 0)
		peso = p;
	if (cot >= 0)
		costo = cot;
}
double Paquete::calcularCosto() {
	double costoTotal;
	double temp = Paquete::peso;
	double temp2 = Paquete::costo;
	costoTotal = temp * temp2;
	return costoTotal;
}
void Paquete::print() {
	cout << "\n*****VERIFICACION DE ENVIO (NORMAL)*****" << endl;
	cout << "NOMBRE: " << Paquete::nombre << endl;
	cout << "DIRECCION: " << Paquete::direccion << endl;
	cout << "CIUDAD: " << Paquete::ciudad << endl;
	cout << "ESTADO: " << Paquete::estado << endl;
	cout << "CODIGO POSTAL: " << Paquete::codigo_postal << endl;
	cout << "DESTINATARIO: " << Paquete::destinatario << endl;
	cout << "COSTO DE ENVIO $" << Paquete::calcularCosto() << endl;
}

PaqueteDosDias::PaqueteDosDias(string n, string d, string c, string e, string cp,string dep, double p, double cot, int f) : Paquete(n, d, c, e, cp,dep , p, cot) {
	cuota = f;
}
double PaqueteDosDias::calcularCosto() {
	double costo;
	double temp = Paquete::peso;
	double temp2 = Paquete::costo;
	double temp3 = PaqueteDosDias::cuota;
	costo = (temp*temp2)+cuota;
	return costo;
}
void PaqueteDosDias::print() {
	cout << "\n*****VERIFICACION DE ENVIO (DOS DIAS)*****" << endl;
	cout << "NOMBRE: " << Paquete::nombre << endl;
	cout << "DIRECCION: " << Paquete::direccion << endl;
	cout << "CIUDAD: " << Paquete::ciudad << endl;
	cout << "ESTADO: " << Paquete::estado << endl;
	cout << "CODIGO POSTAL: " << Paquete::codigo_postal << endl;
	cout << "DESTINATARIO: " << Paquete::destinatario << endl;
	cout << "COSTO DE ENVIO $" << PaqueteDosDias::calcularCosto() << endl;
}

PaqueteNocturno::PaqueteNocturno(string n, string d, string c, string e, string cp, string dep, double p, double cot, int f) : Paquete(n, d, c, e, cp, dep, p, cot) {
	cuotaNocturna = f;
}
double PaqueteNocturno::calcularCosto() {
	double c;
	double temp = Paquete::peso;
	double temp2 = Paquete::costo;
	double temp3 = PaqueteNocturno::cuotaNocturna;
	c = (temp*temp2) + cuotaNocturna;
	return c;
}
void PaqueteNocturno::print() {
	cout << "\n*****VERIFICACION DE ENVIO (NOCTURNO)*****" << endl;
	cout << "NOMBRE: " << Paquete::nombre << endl;
	cout << "DIRECCION: " << Paquete::direccion << endl;
	cout << "CIUDAD: " << Paquete::ciudad << endl;
	cout << "ESTADO: " << Paquete::estado << endl;
	cout << "CODIGO POSTAL: " << Paquete::codigo_postal << endl;
	cout << "DESTINATARIO: " << Paquete::destinatario << endl;
	cout << "COSTO DE ENVIO $" << PaqueteNocturno::calcularCosto() << endl;
}
