#include <iostream>
#include "Circle.h"
#include "Triangle.h"
#include "Function.h"
/*
Для каждой из фигур требуется определить метод нахождения площади фигуры, 
	а также метод нахождения прямоугольника, описывающего фигуру полностью 
		(он может быть больше зоны фигуры, но не меньше).
*/
int main() {
	setlocale(LC_ALL, "rus");

	Circle* circle = new Circle();
	Triangle* triangle = new Triangle();
	std::string shape;

	std::cout << "Введите название геометрической фигуры: (Circle/Triangle)" << std::endl;
	std::cin >> shape;

	switch (get_name_shape(shape)) {
		double c_x, c_y;
		case 1:
			double r; 
			std::cout << "Задайте радиус круга: " << std::endl;
			std::cin >> r;
			circle->setRadius(r);
			circle->setColour();
			std::cout << "Задайте координаты центра круга: " << std::endl;
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
			std::cout << "Задайте длинну стороны треугольника: " << std::endl;
			std::cin >> length;
			triangle->setLengthEdgeTriangle(length);
			triangle->setColour();
			std::cout << "Задайте координаты центра треугольника: " << std::endl;
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
			std::cout << "Неверный ввод!" << std::endl;
	}
	
	delete circle;
	
	return 0;
}