#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int array_number[99], opc, numero;

	for (int x = 0; x <= 99; x++) {
		array_number[x] = x + 1;
	}

	do {
		cout << "1. Busqueda Secuencial" << endl;
		cout << "2. Busqueda Binaria" << endl;
		cout << "3. Salir" << endl;
		cin >> opc;

		switch (opc) {
		case 1:
			cout << "Ingrese numero: ";
			cin >> numero;
			for (int x = 0; x <= 99; x++) {
				if (array_number[x] == numero) {
					cout << "Numero encontrado " << numero << endl;
					cout << "Posicion " << x << endl;
					break;
				}
			}
			break;
		case 2:
			cout << "\nIngrese numero: ";
			cin >> numero;
			if (numero == 50) {
				cout << "Numero encontrado: " << 50 << endl;
				cout << "Posicion: " << 50 - 1 << endl;
			}
			if (numero < 50) {
				for (int x = 50; x <= 50; x++) {
					if (array_number[x] == numero) {
						cout << "Numero encontrado: " << numero << endl;
						cout << "Posicion: " << array_number[x] - 1 << endl;
						break;
					}
				}
			}
			if (numero > 50) {
				for (int x = 50; x <= 99; x++) {
					if (array_number[x] == numero) {
						cout << "Numero encontrado: " << numero << endl;
						cout << "Posicion: " << array_number[x] - 1 << endl;
						break;

					}
				}
			}


			break;
		}
	} while (opc != 3);


	system("pause");
	return 0;
}

