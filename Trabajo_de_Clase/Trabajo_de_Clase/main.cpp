#include <iostream>
#include "objects.h"
#include "Char.h"
#include "Integer.h"
#include "String.h"
#include <vector>

using namespace std;


int main() {

	int size = 0;
	int opp;
	int elem;

	int countInt = 0, countChar = 0,countString = 0;

	objects *array[100];

	do {
	
		cout << "\n******TIPOS DE ELEMENTOS*****" << endl;
		cout << "SIZE: " << size << endl;
		cout << "1. Integer" << endl;
		cout << "2. Char" << endl;
		cout << "3. String" << endl;


		cout << "\nQue tipo de elemento desea agregar?" << endl;
		cin >> elem;

		switch (elem) {
		case 1:
			int numero;
			cout << "Numero: " << endl;
			cin >> numero;
			array[size] = new Integer(numero);
			countInt++;
			size++;
			break;
		case 2:
			char ac;
			cout << "Char: " << endl;
			cin >> ac;
			array[size] = new Char(ac);
			countChar++;
			size++;
			break;
		case 3:
			string ab;
			cout << "String: " << endl;
			cin >> ab;
			array[size] = new String(ab);
			countString++;
			size++;
			break;
		}

		cout << "\nTerminar de agregar -> 0 " << endl;
		cout << "Agregar elemento -> 1" << endl;
		cout << "\nDesea agregar otro elemto: ";
		cin >> opp;

	} while (opp != 0);

	cout << "" << endl;

	for (int x = 0; x < size; x++) {
		array[x]->imprimir();
	}

	cout << "\nElementos Integer: " << countInt << endl;
	cout << "Elementos Char: " << countChar << endl;
	cout << "Elementos String: " << countString << endl;



	system("pause");
	return 0;
}