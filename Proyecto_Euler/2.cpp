/*Cada nuevo término en la sucesión de Fibonacci se genera sumando los dos términos anteriores.
Partiendo de 1 y 2, los 10 primeros términos serán: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
Considerando los términos de la sucesión de Fibonacci cuyos valores no excedan cuatro millones, encuentre la suma de los términos pares.*/

#include <iostream>

using namespace std;

int main() {
    int n1 = 1, n2 = 2, fib = 0, suma = 0;
    
    while (n2 <= 4000000) {
        if (n2 % 2 == 0) {
            suma += n2;
        }
        fib = n1 + n2;
        n1 = n2;
        n2 = fib;
    }
    
    cout << suma << endl;
    
    return 0;
}
