#include <iostream>
#include <string>
#include "Circle.h"
#include "Triangle.h"
#include "Square.h"
#include "Rectangle.h"
#include "Function.h"

int main() {
	Circle* circle = new Circle();
	Triangle* triangle = new Triangle();
	Square* square = new Square();
	Rectangle* rectangle = new Rectangle();
	std::string shape, answer;
	do {
		std::cout << "Enter the name of the geometric shape: (Circle/Triangle/Square/Rectangle)" << std::endl;
		std::cin >> shape;

		switch (get_name_shape(shape)) {
			double c_x, c_y;
		case 1:
			double r;
			std::cout << "Set the radius of the circle: " << std::endl;
			std::cin >> r;
			circle->setRadius(r);
			circle->setColour();
			std::cout << "Set the coordinates of the center of the circle: " << std::endl;
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
			std::cout << "Set the length of the triangle side: " << std::endl;
			std::cin >> length_triangle;
			triangle->setLengthEdgeTriangle(length_triangle);
			triangle->setColour();
			std::cout << "Set the coordinates of the triangle center: " << std::endl;
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
			std::cout << "Set the length of the side of the square: " << std::endl;
			std::cin >> length_square;
			square->setLengthEdgeSquare(length_square);
			square->setColour();
			std::cout << "Set the coordinates of the center of the square: " << std::endl;
			std::cin >> c_x >> c_y;
			if (c_x != c_y) { std::cout << " Error, the sides of the square cannot be not equal! " << std::endl; break; }
			square->setCoordinate(c_x, c_y);
			square->setCoordinateDescRect();
			std::cout << std::endl;
			square->getName();
			square->getArea();
			square->getColour();
			square->getCoordinateDescRect();
			break;
		case 4:
			double length_rectangle_1, length_rectangle_2;
			std::cout << "Set the lengths of the sides of the rectangle: " << std::endl;
			std::cin >> length_rectangle_1 >> length_rectangle_2;
			rectangle->setLengthEdgeRectangle(length_rectangle_1, length_rectangle_2);
			rectangle->setColour();
			std::cout << "Set the coordinates of the center of the rectangle: " << std::endl;
			std::cin >> c_x >> c_y;
			if (c_x == c_y) { std::cout << " Error, the sides of the rectangle cannot be equal! " << std::endl; break; }
			rectangle->setCoordinate(c_x, c_y);
			rectangle->setCoordinateDescRect();
			std::cout << std::endl;
			rectangle->getName();
			rectangle->getArea();
			rectangle->getColour();
			rectangle->getCoordinateDescRect();
			break;
		default:
			std::cout << "Incorrect input!" << std::endl;
		}
		std::cout << "Would you like to continue the work of the program: (yes/no) " << std::endl;
		std::cin >> answer;
	} while (answer == "yes");
	
	delete circle;
	delete triangle;
	delete square;
	delete rectangle;
	
	return 0;
}