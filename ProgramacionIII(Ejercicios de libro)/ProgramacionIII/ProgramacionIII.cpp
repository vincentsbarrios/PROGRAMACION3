// ProgramacionIII.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void numeromayor(int a,int b,int c,int d, int e) {
	int mayor;
	int menor;

	if (a > b&&a > c&&a > d&&a > e) {
		mayor = a;
	}
	if (a < b&&a < c&&a < d&&a < e) {
		menor = a;
	}
	if (b > a&&b > c&&b > d&&b > e) {
		mayor = b;
	}
	if (b < a&&b < c&&b < d&&b < e) {
		menor = b;
	}
	if (c > a&&c > b&&c > d&&c > e) {
		mayor = c;
	}
	if (c < a&&c < b&&c < d&&c < e) {
		menor = c;
	}
	if (d > a&&d > b&&d > c&&d > e) {
		mayor = d;
	}
	if (d < a&&d < b&&d < c&&d < e) {
		menor = d;
	}
	if (e > a&&e > b&&e > c&&e > d) {
		mayor = e;
	}
	if (e < a&&e < b&&e < c&&e < d) {
		menor = e;
	}

	cout << "\nNumero mayor es " << mayor << endl;
	cout << "Numero menor es " << menor << endl;
}
void impar(int num) {
	if (num % 2 == 0)
		cout << "\nNumero es Par" << endl;
	else
		cout << "\nNumero es Impar" << endl;
}
void multiplos(int num,int num2) {
	if(num2%num == 0 || num % num2 == 0)
		cout << "\nEs multiplo" << endl;
	else
		cout << "\nNo es multiplo" << endl;
}
void viaje() {
	int count = 1;
	float kilo=0, litros=0,totalkilo=0,totallitro=0;

	cout << "Para salir escribsa \"-1\"" << endl;
	while (kilo != -1 || litros == -1) {
		cout << "\n******Viaje "<< count <<"*****" <<endl;
		cout << "Kilometros recorridos: ";
		cin >> kilo;
		totalkilo = totalkilo + kilo;
		cout << "Litros usados: ";
		cin >> litros;
		totallitro = totallitro + litros;
		cout << "\nKilomtros por Litros: " << kilo/litros <<endl;
		count++;
	}
	cout << "\nEN LOS " << count << "VIAJES REALIZADOS " << endl;
	cout << "*** RESUMEN ***" << endl;
	cout << "Total de Kilometros recorridos es "<< totalkilo << endl;
	cout << "Total de Litros Usados son " << totallitro << endl;
	cout << "\n Kilomtros por Litros por viaje: " << totalkilo/totallitro << endl;
}
void comision() {
	int week = 200;
	float total=0,com=0, counter = 1, salario=0;
	cout << "\nPara salir escribsa \"-1\"" << endl;
	cout << "*****SEMANA " << counter << "*****" << endl;

	while (com != -1) {
		cout << "Ventas: $";
		cin >> com;
		total = total + com;
	}
	cout << "\n*****SALARIO TOTAL DE LA SEMANA*****" << endl;
	cout << "$" << (total * 0.09)+week;
	cout <<""<< endl;


}
void tarifa() {
	int horas = 0;
	int tarifa = 0;

	while (horas != -1) {
		cout << "Horas de trabajo: ";
		cin >> horas;
		cout << "Tarifa por horas del empleado: ";
		cin >> tarifa;
		cout << "El salario es " << horas * tarifa << endl;
		cout << "" << endl;
	}
}
void palindromo() {
	int num,a,p,r=0;

	cout << "Ingrese numeros (positivos): ";
	cin >> num;

	a = num;

	do {
		p = num % 10;
		r = (r * 10) + p;
		num = num / 10;
	} while (num != 0);

	if (a == r)
		cout << "\nEl numero es un palindromo" << endl;
	else
		cout << "\nEl numero no es un palindromo" << endl;

}
void circulo(){
	double r;
	double pie = 3.14159;

	cout << "\nIntroduzca el radio del circulo: ";
	cin >> r;

	double d = 2 * (pie*(r*r));

	cout << "\nDiametro: " << 2*(pie*(r*r)) << endl;
	cout << "Circunferencia: " << pie * d << endl;
	cout << "Area: " << r*r << endl;

}

int main()
{
		int opp;
		cout << "MENU PRINCIPAL" << endl;
		do {
			cout << "\n1. Numero Mayor y Menor" << endl;
			cout << "2. Numero Impar o Par" << endl;
			cout << "3. Multiplo" << endl;
			cout << "4. Kilometraje de gasolina" << endl;
			cout << "5. Calculo de Comision" << endl;
			cout << "6. Calculo de salario" << endl;
			cout << "7. Palindromos" << endl;
			cout << "8. Numero Binario" << endl;
			cout << "9. Salir" << endl;
			cin >> opp;
			switch (opp) {
			case 1:
				int a, b, c, d, e;
				cout << "\nINGRESE 5 NUMEROS" << endl;
				cout << "Numero 1 : ";
				cin >> a;
				cout << "Numero 2 : ";
				cin >> b;
				cout << "Numero 3 : ";
				cin >> c;
				cout << "Numero 4 : ";
				cin >> d;
				cout << "Numero 5 : ";
				cin >> e;
				numeromayor(a, b, c, d, e);
				break;

			case 2:
				int num;
				cout << "\nINGRESE NUMERO" << endl;
				cout << ">>>: ";
				cin >> num;
				impar(num);
				break;

			case 3:
				int numx;
				int numz;
				cout << "\nINGRESE NUMEROs" << endl;
				cout << "1: ";
				cin >> numx;
				cout << "2: ";
				cin >> numz;
				multiplos(numx,numz);
				break;

			case 4:
				viaje();
				break;

			case 5:
				comision();
				break;

			case 6:
				tarifa();
				break;

			case 7:
				palindromo();
				break;

			case 8:
				circulo();
				break;
			}
		} while (opp != 9);




		system("pause");
    return 0;
}

