#include <string>

int get_name_shape(std::string name_shape) {
	if (name_shape == "Circle") {
		return 1;
	}
	if (name_shape == "Triangle") {
		return 2;
	}
	if (name_shape == "Square") {
		return 3;
	}
	if (name_shape == "Rectangle") {
		return 4;
	}
	else {
		return 0;
	}
}