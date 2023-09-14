#include <iostream>

using namespace std;

bool es_numero_perfecto(int numero) {
    int suma_divisores = 1; 
    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            suma_divisores += i;
            if (i != numero / i) {
                suma_divisores += numero / i;
            }
        }
    }
    return suma_divisores == numero;
}

int main() {
    int n;
    cout << "Ingrese un número n para encontrar los primeros n números perfectos: ";
    cin >> n;

    cout << "Los primeros " << n << " números perfectos son:" << endl;
    int numero = 2; 
    int encontrados = 0;

    while (encontrados < n) {
        if (es_numero_perfecto(numero)) {
            cout << numero << " ";
            ++encontrados;
        }
        ++numero;
    }

    cout << endl;

    return 0;
}
