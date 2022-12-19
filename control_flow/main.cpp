#include <iostream>


constexpr bool condition {false};


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

int main() {

	compile_time_if();

	if_with_initializer();

	return 0;
}