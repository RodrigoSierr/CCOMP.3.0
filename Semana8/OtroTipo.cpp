#include <iostream>

using namespace std;

int main(){
    double x = 3.1516;
    double *ptr = &x;

    cout << *ptr << "\n";

    string cad = "Rodrigo";
    string *ptr1 = &cad;

    cout << *ptr1 << "\n";
    
    cout << cad.at(0) << "\n";
    cout << (*ptr1).at(0)<< "\n";

    cout << ptr1->at(1) << "\n";

    return 0;
}