#include <iostream>

double get_volume(double length, double width) {
	return length*width;
}

double get_base_area(double base, double height) {
	return base*height;
}

int main() {

	double length; double width; double height;

	std::cout << "Welcome to example calculator. Please type in length, width and height information: " << std::endl;

	std::cout << "length: ";
	std::cin >> length;

	std::cout << "width: ";
	std::cin >> width;

	std::cout << "height: ";
	std::cin >> height;

	double base_area = get_base_area(length, width);
	std::cout << "The base area is: " << base_area << std::endl;

	double volume = get_volume(base_area, height);
	std::cout << "The volume is: " << volume << std::endl;

	return 0;
}