#pragma once
#include <cmath>
#include "Geometric.h"

class Triangle : public Geometric {
	std::string name = "Triangle";
	double len_edge_tri = 0;
	double hight = 0;
public:
	void setLengthEdgeTriangle(double len_edge_tri) {
		this->len_edge_tri = len_edge_tri;
		setHight();
	}
	void setHight() {
		this->hight = (sqrtl(3) * len_edge_tri) / 2;
	}
	void setCoordinateDescRect() {
		des.coordinate_x1 = getCoordinateX() - (len_edge_tri / 2) - getStep();
		des.coordinate_y1 = getCoordinateY() + (hight * 2 / 3) + getStep();
		des.coordinate_x2 = getCoordinateX() + (len_edge_tri / 2) + getStep();
		des.coordinate_y2 = getCoordinateY() + (hight * 2 / 3) + getStep();
		des.coordinate_x3 = getCoordinateX() - (len_edge_tri / 2) - getStep();
		des.coordinate_y3 = getCoordinateY() - (hight / 3) - getStep();
		des.coordinate_x4 = getCoordinateX() + (len_edge_tri / 2) + getStep();
		des.coordinate_y4 = getCoordinateY() - (hight / 3) - getStep();
	}

	//___________________________________________________________________________//

	void getName() {
		std::cout << "The desired figure: " << name << std::endl;
	}
	void getArea() {
		std::cout << "The area of the desired shape is equal to: " << ((len_edge_tri / 2) * hight) << std::endl;
	}
	
};