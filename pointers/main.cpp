/*
Pointers are a special kind of variable that store the addresses of other variables, denoted by <datatype> *
*/

#include <iostream>


int main() {

	//can only store address of a variable of type int
	// implicit pointer to nullptr
	int *p_number{};

	double *p_frac_num{};

	//Explicitly initialize to nullptr
	// nullptr assumes the pointers are not pointing to anything
	int* p_number1{nullptr};
	int* p_fractional_number1{nullptr};

	// All pointer variables have the same size

	std::cout << "size of int ptr: " << sizeof(p_number) << std::endl;
	std::cout << "size of double ptr: " << sizeof(p_frac_num) << std::endl;
	std::cout << std::endl;

	int int_var{43};
	int *p_int{&int_var}; //Address of int_var (&)

	std::cout << "Int var: " << int_var << std::endl;
	std::cout << "p_int (Address in memory): " << p_int << std::endl;
	std::cout << std::endl;

	int_var = 50;
	std::cout << "Reassigned int_var: " << int_var << std::endl;
	std::cout << "p_int (Address in memory): " << p_int << std::endl;
	std::cout << std::endl;

	return 0;
}