#pragma once
#include "Geometric.h"

class Circle : public Geometric {
    double radius;

public:
    void setRadius(double r) {
        radius = r;
    }
    double getSquare() {
        //�������� �� ������� cmath!
        return 3.14 * (radius * radius);
    }

};