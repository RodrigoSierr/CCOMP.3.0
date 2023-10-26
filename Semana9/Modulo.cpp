#include "Modulo.h"
#include <iostream>

using namespace std;

int main(){
    Point x1{1,2};
    Point x2{3,4};

    GeometriVector vec(x1 , x2);

    cout << vec.modulo() << endl;

    cout << "Main, terminado" << endl;

    return 0;
}