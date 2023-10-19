#include <iostream>

using namespace std;

int main(){
    //Operador de Direccion = &
    //Operador de Indireccion = *
    
    int x = 10;
    int *ptr = &x;


    cout << &x << endl;
    cout << *ptr << "\n";

    *ptr = 1000;

    cout << *ptr << "\n";
    cout << x; 

    return 0;
}