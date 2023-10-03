#include <iostream>
#include "Circle.h"
#include "Triangle.h"
#include "Square.h"
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
	Square* square = new Square();
	std::string shape;

	std::cout << "������� �������� �������������� ������: (Circle/Triangle/Square)" << std::endl;
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
			circle->getArea();
			circle->getColour();
			circle->getCoordinateDescRect();
			break;
		case 2:
			double length_triangle;
			std::cout << "������� ������ ������� ������������: " << std::endl;
			std::cin >> length_triangle;
			triangle->setLengthEdgeTriangle(length_triangle);
			triangle->setColour();
			std::cout << "������� ���������� ������ ������������: " << std::endl;
			std::cin >> c_x >> c_y;
			triangle->setCoordinate(c_x, c_y);
			triangle->setCoordinateDescRect();
			std::cout << std::endl;
			triangle->getName();
			triangle->getArea();
			triangle->getColour();
			triangle->getCoordinateDescRect();
			break;
		case 3:
			double length_square;
			std::cout << "������� ������ ������� ��������: " << std::endl;
			std::cin >> length_square;
			square->setLengthEdgeSquare(length_square);
			square->setColour();
			std::cout << "������� ���������� ������ ��������: " << std::endl;
			std::cin >> c_x >> c_y;
			square->setCoordinate(c_x, c_y);
			square->setCoordinateDescRect();
			std::cout << std::endl;
			square->getName();
			square->getArea();
			square->getColour();
			square->getCoordinateDescRect();
			break;
		default:
			std::cout << "�������� ����!" << std::endl;
	}
	
	delete circle;
	
	return 0;
}