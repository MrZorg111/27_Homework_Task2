#pragma once
#include <string>
#include "Geometric.h"

class Circle : public Geometric {
    std::string name = "Circle";
    double radius = 0;

public:
    void setRadius(double radius) {
       this -> radius = radius;
    }
    void getName() {
        std::cout << "Искомая фигура: " << name << std::endl;
    }
    double getSquare() {
        //Заменить на функцию cmath!
        return 3.14 * (radius * radius);
    }
    double getRadius() {
        return radius;
    }

};