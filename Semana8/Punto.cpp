#include <iostream>
#include "Punto.h"

int main(){
    Punto p;
    p.setx(10);
    p.sety(20);

    Punto *ptr = &p;

    ptr->setx(2);
    ptr->sety(3);

    ptr->display();                                                                                                                           

 //   p.dislpay();

}