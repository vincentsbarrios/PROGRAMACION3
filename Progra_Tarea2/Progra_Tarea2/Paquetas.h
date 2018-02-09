#pragma once
#include <iostream>

using namespace std;

class Paquete {
public:
	string nombre, direccion, ciudad, estado, codigo_postal,destinatario;
	double peso;
	double costo;

	Paquete(string,string,string,string,string,string,double,double);
	double calcularCosto();
	void print();

};

class PaqueteDosDias : Paquete {
public:
	int cuota;

	PaqueteDosDias(string, string, string, string, string,string, double, double, int);
	double calcularCosto();
	void print();
};

class PaqueteNocturno : Paquete {
public:
	int cuotaNocturna;

	PaqueteNocturno(string, string, string, string, string, string, double, double, int);
	double calcularCosto();
	void print();
};
