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


	return 0;
}