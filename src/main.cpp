#include <iostream>
#include "Circle.h"
#include "Function.h"

int main() {
	setlocale(LC_ALL, "rus");

	Circle* circle = new Circle();

	std::string shape;

	std::cout << "������� �������� �������������� ������: (Circle)" << std::endl;
	std::cin >> shape;

	switch (get_name_shape(shape)) {
		double r, c_x, c_y;
		case 1:
			std::cout << "������� ������ �����: " << std::endl;
			std::cin >> r;
			circle->setRadius(r);
			circle->setColour();
			std::cout << "������� ���������� ������ �����: " << std::endl;
			std::cin >> c_x >> c_y;
			circle->setCoordinate(c_x, c_y);
			circle->setCoordinateDescrRect(circle->getRadius());
			circle->getSquare();
			circle->getColour();
			circle->getCoordinateDescRect();
			break;
		default:
			std::cout << "�������� ����!" << std::endl;
	}
	
	delete circle;
	
	return 0;
}