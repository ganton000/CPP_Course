#include <iostream>


int main() {

	int x; int y;

	std::cout << "Welcome to territory control.";
	std::cout << "Please type in your x and y positions" << std::endl;

	std::cout << "Type in your x location: ";
	std::cin >> x;
	std::cout << "Type in your y location: ";
	std::cin >> y;

	if (( y >= 0 && y <= 20) && ( y >= 0 && y <= 10)) {
		std::cout << "You are completely surrounded. Don't move!" << std::endl;
	} else {
		std::cout << "You're out of reach!" << std::endl;
	}
	return 0;
}


