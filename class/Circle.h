#pragma once
#include <cmath>
#include <string>
#include "Geometric.h"

class Circle : public Geometric {
    std::string name = "Circle";
    double radius = 0;
    
public:
    void setRadius(double radius) {
       this -> radius = radius;
    }
    void setCoordinateDescrRect() {
         des.coordinate_x1 = getCoordinateX() - (radius + getStep());
         des.coordinate_y1 = getCoordinateY() + (radius + getStep());
         des.coordinate_x2 = getCoordinateX() + (radius + getStep());
         des.coordinate_y2 = getCoordinateY() + (radius + getStep());
         des.coordinate_x3 = getCoordinateX() - (radius + getStep());
         des.coordinate_y3 = getCoordinateY() - (radius + getStep());
         des.coordinate_x4 = getCoordinateX() + (radius + getStep());
         des.coordinate_y4 = getCoordinateY() - (radius + getStep());
    }
    
    
    void getName() {
        std::cout << "Искомая фигура: " << name << std::endl;
    }
    void getArea() {
        std::cout << "Площадь фигуры: " << 3.14 * pow(radius, 2) << std::endl;
    }
};