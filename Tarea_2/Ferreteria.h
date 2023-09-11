#pragma once
#include <string>
#include <iostream>

using namespace std;

class Ferreteria {
private:
    string num_pieza;
    string des_pieza;
    int cant_pieza;
    int prec_art;
    double vat{ 0.2 };
    double desc{ 0 };

public:
    Ferreteria()
    {
        num_pieza = "";
        des_pieza = "";
        cant_pieza = 0;
        prec_art = 0;
        vat = 0;
        desc = 0;
    }
    Ferreteria(std::string numpieza, std::string despieza, int cantpieza, int precart, double vat_, double desc_)
        : num_pieza(numpieza), des_pieza(despieza), cant_pieza(cantpieza), prec_art(precart), vat(vat_), desc(desc_) {
    }
    void setnum_pieza(string numpieza) {
        num_pieza = numpieza;
    }
    void setdes_pieza(string despieza) {
        des_pieza = despieza;
    }
    void setcant_pieza(int cantpieza) {
        if (cantpieza > 0) {
            cant_pieza = cantpieza;
        }
    }
    void setprec_art(int precart) {
        if (precart > 0) {
            prec_art = precart;
        }
    }

    void setdesc(double desc_) {
        if (desc_ > 0) {
            desc = desc_;
        }
    }
    void setvat(double vat_) {
        if (vat_ > 0) {
            vat = vat_;
        }
    }
    string getnum_pieza() {
        return num_pieza;
    }
    string getdes_pieza() {
        return des_pieza;
    }

    int getcant_pieza() {
        return cant_pieza;
    }

    int getprec_art() {
        return prec_art;
    }

    double getvat() {
        return vat;
    }

    double getdesc() {
        return desc;
    }

    double getnvoiceAmount() {
        double recibo = (cant_pieza * prec_art) + vat;
        recibo = recibo - (desc / 100);
        return recibo;
    }
};
