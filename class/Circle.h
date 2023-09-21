#pragma once
#include "Geometric.h"

class Circle : public Geometric {
    double radius;

public:
    void setRadius(double r) {
        radius = r;
    }
    double getSquare() {
        //Заменить на функцию cmath!
        return 3.14 * (radius * radius);
    }

};