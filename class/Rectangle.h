#pragma once
#include "Geometric.h"

class Rectangle : public Geometric {
	std::string name = "Rectangle";
	double higth = 0;
	double width = 0;
public:
	void setLengthEdgeRectangle(double higth, double width) {
		this->higth = higth;
		this->width = width;
	}
	void setCoordinateDescRect() {
		des.coordinate_x1 = getCoordinateX() - (width / 2) - getStep();
		des.coordinate_y1 = getCoordinateY() + (higth / 2) + getStep();
		des.coordinate_x2 = getCoordinateX() + (width / 2) + getStep();
		des.coordinate_y2 = getCoordinateY() + (higth / 2) + getStep();
		des.coordinate_x3 = getCoordinateX() - (width / 2) - getStep();
		des.coordinate_y3 = getCoordinateY() - (higth / 2) - getStep();
		des.coordinate_x4 = getCoordinateX() + (width / 2) + getStep();
		des.coordinate_y4 = getCoordinateY() - (higth / 2) - getStep();
	}


	void getName() {
		std::cout << "Искомая фигура: " << name << std::endl;
	}
	void getArea() {
		std::cout << "Площадь фигуры: " << higth * width << std::endl;
	}
};