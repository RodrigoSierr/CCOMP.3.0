//Al enumerar los primeros seis números primos: 2, 3, 5, 7, 11 y 13, podemos ver que el sexto primo es 13. ¿Cuál es el número primo 10 001?

#include <iostream>
using namespace std;

bool esPrimo(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n = 0;
    int cont = 0;
    while (cont < 10001) {
        n++;
        if (esPrimo(n)) {
            cont++;
        }
    }
    cout << n << endl;
    return 0;
}
