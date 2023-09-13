/*Implemente un programa que imprima solicite por teclado un numero n e imprima los n primeros primos.
Si ingresa 20
Debe imprimir: 2 3 5 7 11 13 17 19
Un numero es primo si es divisible unicamente entre 1 y el mismo numero.*/

#include <iostream>

using namespace std;

bool primo(int x) {
	if ((x == 1) || (x == 2) || (x == 4)) {
		return false;
	}
	else if ((x <= 2)) {
		return true;
	}
	}
int main() {
	int x;
	cout << "Valor de x: ";
	cin >> x;
	if (primo(x)) {
		cout << "no es primo";
	}
	else {
		cout << "es primo";
	}


	for (int i = 2; i < 2 / x; i++) {
		if (x % 2 == 0){
			return false;
	}
		else {
			return true;
	}}
	
	
	
	return 0;

}