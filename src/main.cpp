#include <iostream>
#include "Circle.h"
#include "Triangle.h"
#include "Function.h"
/*
��� ������ �� ����� ��������� ���������� ����� ���������� ������� ������, 
	� ����� ����� ���������� ��������������, ������������ ������ ��������� 
		(�� ����� ���� ������ ���� ������, �� �� ������).
*/
int main() {
	setlocale(LC_ALL, "rus");

	Circle* circle = new Circle();
	Triangle* triangle = new Triangle();
	std::string shape;

	std::cout << "������� �������� �������������� ������: (Circle/Triangle)" << std::endl;
	std::cin >> shape;

	switch (get_name_shape(shape)) {
		double c_x, c_y;
		case 1:
			double r; 
			std::cout << "������� ������ �����: " << std::endl;
			std::cin >> r;
			circle->setRadius(r);
			circle->setColour();
			std::cout << "������� ���������� ������ �����: " << std::endl;
			std::cin >> c_x >> c_y;
			circle->setCoordinate(c_x, c_y);
			circle->setCoordinateDescrRect();
			std::cout << std::endl;
			circle->getName();
			circle->getSquare();
			circle->getColour();
			circle->getCoordinateDescRect();
			break;
		case 2:
			double length;
			std::cout << "������� ������ ������� ������������: " << std::endl;
			std::cin >> length;
			triangle->setLengthEdgeTriangle(length);
			triangle->setColour();
			std::cout << "������� ���������� ������ ������������: " << std::endl;
			std::cin >> c_x >> c_y;
			triangle->setCoordinate(c_x, c_y);
			triangle->setCoordinateDescRect();
			std::cout << std::endl;
			triangle->getName();
			triangle->getSquare();
			triangle->getColour();
			triangle->getCoordinateDescRect();
			break;
		default:
			std::cout << "�������� ����!" << std::endl;
	}
	
	delete circle;
	
	return 0;
}