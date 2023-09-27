/*Implemente un programa que imprima solicite por teclado un numero n e imprima los n primeros primos.
Si ingresa 20
Debe imprimir: 2 3 5 7 11 13 17 19
Un numero es primo si es divisible unicamente entre 1 y el mismo numero.*/

#include <iostream>

using namespace std;

bool es_primo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Ingrese un número n: ";
    cin >> n;

    if (n <= 0) {
        cout << "El número debe ser positivo." << endl;
        return 1;
    }

    cout << "Los primeros " << n << " números primos son:" << endl;
    int numero = 2;
    int encontrados = 0;

    while (encontrados < n) {
        if (es_primo(numero)) {
            cout << numero << " ";
            ++encontrados;
        }
        ++numero;
    }

    cout << endl;

    return 0;
}

