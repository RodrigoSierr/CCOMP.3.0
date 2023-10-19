#include <iostream>

class Punto{
    private:
    int x;
    int y;
    
    public:
   /* Punto(int x_, int y_)
    :x(x_),y(y_){
    }*/
    void setx(int x_){
        x = x_;
    }
    void sety(int y_){
        y = y_;
    }
    int getx(){
        return x;
    }
    int gety(){
        return y;
    }
    void display() const{
        std::cout << "(" << x << "," << y << ")" << std::endl;
    }

};