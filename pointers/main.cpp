/*
Pointers are a special kind of variable that store the addresses of other variables, denoted by <datatype> *
*/

#include <iostream>
#include <iomanip>
#include <cstdio>

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
	std::cout  << "p_int (Address in memory in dec format): " << std::endl;
	//printf("ptr = %lld\n", reinterpret_cast<long long>(p_int));
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

	// Arrays of pointers to char (c-strings)

	const char *predictions [] {
		"prediction 1",
		"prediction 2",
		"prediction 3"
	};

	std::cout << "char pointer arr, predictions: " << predictions << std::endl;
	std::cout << "*predictions: " << *predictions << std::endl;
	std::cout << "&predictions: " << &predictions << std::endl;
	std::cout << "predictions[0]: " << predictions[0] << std::endl;
	std::cout << "**predictions: " << **predictions << std::endl;
	std::cout << "*predictions[0]: " << *predictions[0] << std::endl;
	std::cout << "&*predictions: " << &*predictions << std::endl;
	std::cout << "&predictions[0]: " << &predictions[0] << std::endl;
	std::cout << std::endl;

	int var3 {50};
	int *new_ptr {&var3};

	std::cout << "var3: " << var3 << std::endl;
	std::cout << "set *new_ptr {&var3}" << std::endl;
	std::cout << "*new_ptr: " << *new_ptr << std::endl;
	std::cout << "new_ptr: " << new_ptr << std::endl;
	std::cout << std::endl;

	*new_ptr = 40;
	std::cout << "set *new_ptr = 40;" << std::endl;
	std::cout << "*new_ptr: " << *new_ptr << std::endl;
	std::cout << "var3: " << var3 << std::endl;
	std::cout << std::endl;

	int var4{100};
	std::cout << "init var4 = 100;" << std::endl;
	std::cout << "set new_ptr = &var4" << std::endl;
	new_ptr = &var4;
	std::cout << "*new_ptr: " << *new_ptr << std::endl;
	std::cout << "new_ptr: " << new_ptr << std::endl;
	std::cout << std::endl;


	/*
	Will go over:

	const int *ptr ::: cannot modify value through p_var
	BUT you can point to other memory address

	int* const p_var ::: this is a const pointer, cannot point to another memory address! Now this can point to a non-const variable!

	cont int* const p_var ::: can't change either the pointer or the data in the pointer.
	*/

	int number{5}; //not constant

	std::cout << "number: " << number << std::endl;
	std::cout <<"&number: " << &number << std::endl;

	number += 7;
	std::cout << "number +=7: " << number << std::endl;
	std::cout << "&number " << &number << std::endl;

	return 0;
}