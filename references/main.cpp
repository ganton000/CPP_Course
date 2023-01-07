/*
Differences between pointers:

Cannot be used via dereferencing
Can't be changed to reference something else
Must be initialized at declaration (otherwise compiler error)
*/

#include <iostream>



int main() {

	int int_value {45};
	double double_value {33.65};

	int &ref_to_int {int_value};
	double &ref_to_double {double_value};


	std::cout << "int_value: " << int_value << " and ref value: " << ref_to_int << std::endl;

	std::cout << "int_addr: " << &int_value << " and ref add: " << &ref_to_int << std::endl;
	std::cout << std::endl;

	ref_to_int = 30;

	std::cout << int_value << std::endl;

	std::cout << std::endl;

	// const references

	const int &new_ref {int_value};

	//new_ref = 30 // gives compile error

	// const keyword applies to the variable name applied to
	// and not to the original variable


	//References and range-based for loops

	int scores[10] {1,2,3,4,5,6,7,8,9,10};

	for (auto &score: scores) {
		score = score*10;
	}

	for (auto score: scores) {
		std::cout << " " << score;
	}
	std::cout << std::endl;

	return 0;
}