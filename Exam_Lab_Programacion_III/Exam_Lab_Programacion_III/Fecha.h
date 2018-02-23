#pragma once
class Fecha
{
private:
	int dia, mes, anio;

public:
	Fecha();

	void setDia(int);
	void setMes(int);
	void setAnio(int);

	int getDia();
	int getMes();
	int getAnio();

	void imprimirFecha();

};

