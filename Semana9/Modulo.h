#ifndef __MODULO_H__
#define __MODULO_H__


#include <iostream>
#include "Point.h"
#include <cmath>


 using namespace std; 

 class GeometriVector{
    private:
        Point start;
        Point end;
    public:
    GeometriVector(Point start, Point end){
        this->start = start;
        this->end = end;
    }
    ~GeometriVector(){
        std::cout << "GeometriVector: Invocando el Destructor" << "\n";
    }
    double modulo()const{
        return sqrt(pow((end.getX() - start.getX()), 2) +
                    pow((end.getY() - start.getY()), 2));
    }
    void setStart(Point start){
        this -> start = start;
    }
    void setEnd(Point end){
        this->end = end;
    }
    Point getStart() const{
        return start;
    }
    Point getEnd() const {
        return end;
    }
 };

 #endif