#include <iostream>


constexpr bool condition {false};



int main() {

	//The branch which fails gets eliminated at compile time
	if constexpr (condition) {
		std::cout << "Condition is true" << std::endl;
	} else {
		std::cout << "Condition is not true" << std::endl;
	}

	return 0;
}