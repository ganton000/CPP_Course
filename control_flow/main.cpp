#include <iostream>
#include <string>

constexpr bool condition {false};

//Tools
const int Pen{10};
const int Marker{20};
const int Eraser{30};
const int Rectangle{40};
const int Circle{50};
const int Ellipse{60};


int compile_time_if() {
	//The branch which fails gets eliminated at compile time
	if constexpr (condition) {
		std::cout << "Condition is true" << std::endl;
	} else {
		std::cout << "Condition is not true" << std::endl;
	}

	return 0;
}

int if_with_initializer() {

	bool go {true};

	//declares and initializes variable inplace
	if (int high_speed{33}; go) {
		if (high_speed > 5){
			std::cout << "Slow down!" << std::endl;
		} else {
			std::cout << "All good!" << std::endl;
		}
	} else {
		std::cout << "high_speed: " << high_speed << std::endl;
		std::cout << "Stop" << std::endl;
	}

	return 0;
}

int switch_with_initializer() {


	int tool {70};

	switch(double strength{3.56}; tool) {

		case Pen: {
			std::cout << "Active tool is Pen" << std::endl;
		} break;

		case Marker: {
			std::cout << "Active tool is Marker" << std::endl;
		} break;

		case Eraser:
		case Rectangle:
		case Circle: {
			std::cout << "Drawing Shapes" << std::endl;
		} break;

		case Ellipse: {
			std::cout << "Active tool is Ellipse" << std::endl;
		}

		default: {
			std::cout << "No match found" << std::endl;
		} break;
	}

	return 0;
}

int main() {

	compile_time_if();

	if_with_initializer();

	switch_with_initializer();

	return 0;
}