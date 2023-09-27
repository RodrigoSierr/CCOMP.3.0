#include <iostream>

using namespace std;
int main() {
    int n;
    cout << "Ingrese el valor de n para generar los primeros n números de la secuencia de Fibonacci: ";
    cin >> n;

    if (n <= 0) {
        cout << "El valor de n debe ser un número positivo." << endl;
        return 1;
    }

    int a = 0; 
    int b = 1; 

    cout << "Los primeros " << n << " números de la secuencia de Fibonacci son:" << endl;

    for (int i = 0; i < n; ++i) {
        cout << a << " ";

        int temp = a; 
        a = b;        
        b = temp + b; 
    }

    cout << endl;

    return 0;
}
