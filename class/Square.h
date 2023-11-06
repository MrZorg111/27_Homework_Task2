#pragma once
#include <cmath>
#include <string>
#include "Geometric.h"

class Square : public Geometric {
	std::string name = "Square";
	double len_edge_squa;
	
public:
	void setLengthEdgeSquare(double len_endge_squa) {
		this->len_edge_squa = len_endge_squa;
	}
	void setCoordinateDescRect() {
		des.coordinate_x1 = getCoordinateX() - (len_edge_squa / 2) - getStep();
		des.coordinate_y1 = getCoordinateY() + (len_edge_squa / 2) + getStep();
		des.coordinate_x2 = getCoordinateX() + (len_edge_squa / 2) + getStep();
		des.coordinate_y2 = getCoordinateY() + (len_edge_squa / 2) + getStep();
		des.coordinate_x3 = getCoordinateX() - (len_edge_squa / 2) - getStep();
		des.coordinate_y3 = getCoordinateY() - (len_edge_squa / 2) - getStep();
		des.coordinate_x4 = getCoordinateX() + (len_edge_squa / 2) + getStep();
		des.coordinate_y4 = getCoordinateY() - (len_edge_squa / 2) - getStep();
	}
	
	//____________________________________________________________//

	void getName() {
		std::cout << "The desired figure: " << name << std::endl;
	}
	void getArea() {
		std::cout << "The area of the figure: " << len_edge_squa * len_edge_squa << std::endl;
	}
};