/*
Pointers are a special kind of variable that store the addresses of other variables, denoted by <datatype> *
*/

#include <iostream>
#include <iomanip>


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
	std::cout  << "p_int (Address in memory): " << p_int << std::endl;
	std::cout << std::endl;

	std::cout << "Address of p_int pointer (&p_int): " << (&p_int) << std::endl;
	std::cout << std::endl;

	//Derefencing a pointer
	//Act of reading value through a pointer (reading the value contained in the address)

	int new_var{99};
	p_int = &new_var;
	std::cout << "p_int is now pointing to new_var (memory): " << p_int << std::endl;
	std::cout << "Dereferencing p_int: " << *p_int << " equals value of new_var: " << new_var << std::endl;
	std::cout << std::endl;

	// Declaring pointers to char
	char *p_char_var {nullptr};
	char char_var {'A'};

	p_char_var = &char_var;

	std::cout << "Value stored in p_char_var is: " << *p_char_var << std::endl;
	std::cout << std::endl;

	// Can initialize char pointers to C-string literals!

	const char *p_message {"Hello World!"};

	std::cout << "C-string literal char pointer: " << p_message << " with value " << *p_message << std::endl;
	std::cout << std::endl;


	return 0;
}