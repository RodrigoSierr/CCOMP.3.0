#include <iostream>
#include "Ferreteria.h"
#include <string> 

using namespace std;

int main(){
    Ferreteria factura{"123", "Pieza A", 10, 25, 0.18, 5.0};
    cout << "El numero de piezas es: " << factura.getnum_pieza() << endl;
    cout << "La Descripcion de la pieza es: " << factura.getdes_pieza() << endl;
    cout << "La cantidad de articulos es: " << factura.getcant_pieza()<< endl;
    cout << "El precio del articulo seria: " << factura.getprec_art()<< endl;
    cout << "El impuesto es: " << factura.getvat()<< endl;
    cout << "El descuento es: " << factura.getdesc() << endl;

    














    return 0;
}