#include <iostream>
#include "Ferreteria.h"
#include <string> 

using namespace std;

int main() {
    Ferreteria factura{ "2", "Martillo", 2, 25, 0.2, 5.0 };
    cout << "El numero de piezas es: " << factura.getnum_pieza() << endl;
    cout << "La Descripcion de la pieza es: " << factura.getdes_pieza() << endl;
    cout << "La cantidad de articulos es: " << factura.getcant_pieza() << endl;
    cout << "El precio del articulo seria: " << factura.getprec_art() << endl;
    cout << "El impuesto es: " << factura.getvat() << endl;
    cout << "El descuento es: " << factura.getdesc() << endl;


    double importeRecibo = factura.getnvoiceAmount();

    cout << "Importe del recibo: " << importeRecibo << endl;

    return 0;


}
