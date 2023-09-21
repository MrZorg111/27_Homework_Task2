#include <iostream>
#include "Circle.h"
#include "Function.h"

int main() {
	setlocale(LC_ALL, "rus");

	Circle* circle = new Circle();

	std::string shape;

	std::cout << "Введите название геометрической фигуры: (Circle)" << std::endl;
	std::cin >> shape;

	switch (get_name_shape(shape)) {
		case 1:
			circle->setColour();
			break;
		default:
			std::cout << "Неверный ввод!" << std::endl;
	}
	return 0;
}