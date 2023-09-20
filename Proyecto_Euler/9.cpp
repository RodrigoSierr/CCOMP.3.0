/*Un triplete pitagórico es un conjunto de tres números naturales, a < b < c, para los cuales, a2 + b2 = c2 
Por ejemplo, 32 + 42 = 9 + 16 = 25 = 52. 
Existe exactamente un triplete pitagórico para el cual
 a + b + c = 1000. 
 Encuentre el producto abc
*/
#include <iostream>
using namespace std;

int main() {
    for (int a = 1; a < 1000; a++) {
        for (int b = a + 1; b < 1000; b++) {
            int c = 1000 - a - b;
            if (a * a + b * b == c * c) {
                cout << "El triplete pitagórico es: " << a << ", " << b << ", " << c << endl;
                cout << "El producto es: " << a * b * c << endl;
                return 0;
            }
        }
    }
    return 0;
}
