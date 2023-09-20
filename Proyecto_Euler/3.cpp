/*Los factores primos de 13195 son 5, 7, 13 y 29. 
¿Cuál es el mayor factor primo del número 600851475143?*/

#include <iostream>

using namespace std;

int main() {
    long long x;
    x = 600851475143;
    int div;
    div = 2;
    while((div*div) < x){
        if ((x%div)==0){
            x /= div;
            continue;
        }
        div ++;

    }
    cout<<x;


    return 0;
}
