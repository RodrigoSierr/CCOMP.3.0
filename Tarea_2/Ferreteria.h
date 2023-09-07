#include <string>
#include <iostream>

using namespace std;

class Ferreteria{
    private:
    string num_pieza;
    string des_pieza;
    int cant_pieza;
    int prec_art;
    double vat {0.2};
    double desc {0};
    
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

    void vender(double monto){
        
    }

    void setnum_pieza (string numpieza){
        num_pieza = numpieza;
    }
    string getnum_pieza(){
        return num_pieza;
    }
    void setdes_pieza(string despieza){
        des_pieza = despieza;
    }
    string getdes_pieza(){
        return des_pieza;
    }
    void setcant_pieza(int cantpieza){
        cant_pieza = cantpieza;
    }
    int getcant_pieza(){
        return cant_pieza;
    }
    void setprec_art(int precart){
        prec_art = precart;
    }
    int getprec_art(){
        return prec_art;
    }
    void setvat(double vat_){
        vat = vat_;
    }
    double getvat(){
        return vat;
    }
    void setdesc(double desc_){
        desc = desc_;
    }
    double getdesc(){
        return desc;
    }
    double monto(int total){
        total = (cant_pieza * prec_art) / vat; 
    }

};