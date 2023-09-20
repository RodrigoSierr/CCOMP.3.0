/*2520 es el número más pequeño que se puede dividir por cada uno de los números del 1 al 10 sin resto. 
¿Cuál es el número positivo más pequeño que es divisible por todos los números del 1 al 20?*/

#include <iostream>
using namespace std;


int main(){
    int Divcort = 40;
    int i = 1;

    while (i<20){
        if (Divcort%i == 0){
            i++;
            continue;
        }
        else{
            i = 10;
            Divcort += 20;
        }
    }
    cout << Divcort;
    
    return 0;
}
