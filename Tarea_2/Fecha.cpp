#include "Fecha.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
	int mes;
	int dia;
	int año;
	
	cout << "Introduzca el mes: ";
	cin >> mes;
	
	if (mes < 1 || mes > 12) {
		cout << "El mes ingresado no es válido." << endl;
		mes = 1;
		cout << "Mes tomara el valor de: " << mes << endl;
	}

	cout << "Introduza el dia: ";
	cin >> dia;

	cout << "Introduza el año: ";
	cin >> año;
	
	Fecha Calen(mes, dia, año);
	Calen.DisplayDate();




	return 0;
}
