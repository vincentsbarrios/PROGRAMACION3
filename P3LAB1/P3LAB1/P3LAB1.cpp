// P3LAB1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int tama, arre;
	int* arreglo;
	int opcion;

	do {
		cout << "\n**** MENU ****" << "\n1.Burbuja" << "\n2.Simple" << endl;
		cin >> opcion;

		switch (opcion) {
		case 1:
			cout << "Tamano de la lista: ";
			cin >> tama;
			arreglo = new int[tama];
			cout << endl << "**** INGRESE LOS NUMEROS ****" << endl;

			for (int x = 0; x < tama; x++) {
				cout << "Ingresa el numero " << x << " de la serie: ";
				cin >> arreglo[x];
				cout << endl;
			}

			for (int z = 1; z < tama; ++z) {
				for (int v = 0; v < (tama - z); ++v) {
					if (arreglo[v] > arreglo[v + 1]) {
						arre = arreglo[v];
						arreglo[v] = arreglo[v + 1];
						arreglo[v + 1] = arre;
					}
				}
			}
			cout << "**** NUMEROS ORDENADOS ****" << endl;
			for (int w = 0; w < tama; w++) {
				cout << "Numero " << w << ".- " << arreglo[w] << endl;
			}
			break;
			
		case 2:
			cout << "Tamano de la lista: ";
			cin >> tama;
			arreglo = new int[tama];
			cout << endl << "**** INGRESE LOS NUMEROS ****" << endl;

			for (int x = 0; x < tama; x++) {
				cout << "Ingresa el numero " << x << " de la serie: ";
				cin >> arreglo[x];
				cout << endl;
			}

			for (int i = 0; i < tama; i++) {
				for (int j = 0; j < tama; j++) {
					if (arreglo[i] < arreglo[j]) {
						int arre = arreglo[j];
						arreglo[j] = arreglo[i];
						arreglo[i] = arre;
					}
				}
			}
			cout << "**** NUMEROS ORDENADOS ****" << endl;
			for (int w = 0; w < tama; w++) {
				cout << "Numero " << w << ".- " << arreglo[w] << endl;
			}
			break;
		}
	} while (opcion != 3);

	system("pause");
	return 0;
}
