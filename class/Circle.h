#pragma once
#include "Geometric.h"

class Circle : public Geometric {
    double radius;

public:
    void setRadius(double radius) {
       this -> radius = radius;
    }
    double getSquare() {
        //Заменить на функцию cmath!
        return 3.14 * (radius * radius);
    }
    double getRadius() {
        return radius;
    }

};