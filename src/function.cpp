#include <string>

int get_name_shape(std::string name_shape) {
	if (name_shape == "Circle") {
		return 1;
	}
	if (name_shape == "Triangle") {
		return 2;
	}
	else {
		return 0;
	}
}