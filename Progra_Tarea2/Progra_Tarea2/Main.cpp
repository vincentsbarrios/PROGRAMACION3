#include <iostream>
#include <string>
#include "Paquetas.h"

using namespace std;

class Cuentas {
public:
	Cuentas(int nuevoSaldo) {
		if (nuevoSaldo >= 0) {
			saldo = (float)nuevoSaldo;
		}
		else {
			saldo = 0;
			cout << "ERROR > Saldo inicial invalido!" << endl;
		}
	}

	float saldo=0;
	void depositar(float);
	void retirar(float);
	float saldo_actual();
};
void Cuentas::depositar(float deposito) {
	saldo = saldo + deposito;
	cout << "El saldo despues del deposito es de " << saldo << endl;
}
void Cuentas::retirar(float retirar) {
	if (retirar < saldo) {
		saldo = saldo - retirar;
		cout << "El saldo despues de retirar es de " << saldo << endl;
	}
	else {
		cout << " ERROR > La suma a retirar es mayor que el saldo actual." << endl;
	}
}
float Cuentas::saldo_actual() {
	cout << "Saldo actual es de " << saldo << endl;
	return saldo;
}

class Factura {
private:
	string pieza;
	string descripcion;
	int cantidad;
	float precio;

public:
	Factura(string pieza,string descripcion,int cantidad,float precio){
		this->pieza = pieza;
		this->descripcion = descripcion;
		this->cantidad = cantidad;
		this->precio = precio;
	}

	void setPieza(string);
	void setDescripcion(string);
	void setCantida(int);
	void setPrecio(float);

	string getPieza();
	string getDescripcion();
	int getCantidad();
	float getPrecio();

	void imprimir();

};
void Factura::setPieza(string p) {
	Factura::pieza = p;
}
string Factura::getPieza() {
	return pieza;
}
string Factura::getDescripcion() {
	return descripcion;
}
int Factura::getCantidad() {
	return cantidad;
}
float Factura::getPrecio() {
	return precio;
}
void Factura::imprimir() {
	cout << "\n**********FACTURA********" << endl;
	cout << "NUMERO DE PIEZA " << Factura::getPieza() << endl;
	cout << "PRECIO POR UNIDAD " << Factura::getPrecio() << endl;
	cout << "MONTO TOTAL Lps " << Factura::getCantidad()*Factura::getPrecio() << endl;
} 


class Fecha {
private:
	int mes,dia,año;
public:
	Fecha(int m,int d,int a){

		if (m < 13 && m >= 0)
			mes = m;
		else
			mes = 1;
		if (d < 32 && d >= 0)
			dia = d;
		else
			dia = 1;
		año = a;
	}
	
	void setMes(int);
	void setDia(int);
	void setAño(int);

	int getMes();
	int getDia();
	int getAño();

	void mostrar();
};
int Fecha::getMes() {
	return mes;
}
int Fecha::getDia() {
	return dia;
}
int Fecha::getAño() {
	return año;
}
void Fecha::mostrar() {
	cout << "\n FECHA " << Fecha::getDia() << "/" << Fecha::getDia() << "/" << Fecha::getAño() << endl;
}




int main() 
{
	int opp;

	do {
		cout << "\nMENU PRINCIPAL" << endl;
		cout << "1. BANCO" << endl;
		cout << "2. CLASE FACTURA" << endl;
		cout << "3. CLASE FECHA" << endl;
		cout << "4. CLASE PAQUETE" << endl;
		cout << "5. SALIR" << endl;
		cout << ">>> ";
		cin >> opp;

		switch (opp) {
		case 1:
		{
			int s;
			int opc;
			cout << "\nINGRESE SALDO: " << endl;
			cin >> s;
			Cuentas kk = Cuentas(s);

			do {
				cout << "\nMENU BANCARIO" << endl;
				cout << "1. DEPOSITAR" << endl;
				cout << "2. RETIRAR" << endl;
				cout << "3. VER SALDO ACTUAL" << endl;
				cout << "4. SALIR" << endl;
				cin >> opc;

				switch (opc) {
				case 1:
					float d;
					cout << "\nCANTIDAD A DEPOSITAR: " << endl;
					cin >> d;
					kk.depositar(d);
					break;
				case 2:
					float r;
					cout << "\nCANTIDAD A RETIRAR: " << endl;
					cin >> r;
					kk.retirar(r);
					break;
				case 3:
					kk.saldo_actual();
					break;

				}//END SWITCH
			} while (opc != 4);// END DOWHILE
		}
			break;

		case 2:
		{
			int c=0;
			string p, d;
			float pr=0;

			cout << "\n********FERRETERIA********" << endl;
			cout << "\nNUMERO DE PIEZA: ";
			cin >> p;
			cout << "DESCRIPCION: ";
			cin >> d;
			cout << "CANTIDAD: ";
			cin >> c;
			cout << "PRECIO: ";
			cin >> pr;
			Factura gg = Factura(p,d,c,pr);
			gg.imprimir();

		}
			break;

		case 3:
		{
			int m, d, a;
			cout << "\n********INGRESE FECHA********" << endl;
			cout << "MES: ";
			cin >> m;
			cout << "DIA: ";
			cin >> d;
			cout << "AÑO: ";
			cin >> a;

			Fecha JJ = Fecha(m, d, a);

			JJ.mostrar();
		}
			break;

		case 4:
		{
			string n, d, c, e, cp, dp;
			double peso, costo;
			int df=0, nf=0;

			cout<<"\n********SERVICIO DE ENVIO DE PAQUETES********"<<endl;
			cout << "NOMBRE: ";
			cin >> n;
			cout << "DIRECCION: ";
			cin >> d;
			cout << "CIUDAD: ";
			cin >> c;
			cout << "ESTADO: ";
			cin >> e;
			cout << "CODIGO POSTAL: ";
			cin >> cp;
			cout << "DESTINATARIO: ";
			cin >> dp;
			cout << "PESO: ";
			cin >> peso;
			cout << "COSTO: ";
			cin >> costo;
			Paquete LL = Paquete(n,d,c,e,cp,dp,peso,costo);
			LL.print();

			PaqueteDosDias JJ = PaqueteDosDias(n, d, c, e, cp, dp, peso, costo,10);
			JJ.print();

			PaqueteNocturno GG = PaqueteNocturno(n, d, c, e, cp, dp, peso, costo,25);
			GG.print();
		}
			break;
	

		}//END SWITCH
	}while(opp != 5);//END DOWHILE




}