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
	std::cout << std::endl;


	int number3 {632};
	//can't modify number3 through p_number3
	//but can modify number3 directly
	const int *p_number3 {&number3};

	std::cout << "const int *p_number3 pointing to number3 {632}: " << std::endl;
	std::cout << &p_number3 << std::endl;

	number3 = 500;
	std::cout << "changing value number3 to 500: " << std::endl;
	std::cout << "*p_number3: " << *p_number3 << std::endl;
	std::cout << "&p_number3: " << &p_number3 << std::endl;
	std::cout << std::endl;
	// *p_number3 = 444; // compile error

	//Although can't change what's pointed to by p_number3
	//can still change where it's pointing
	int number4 {872};
	p_number3 = &number4;

	/*
	* const ptrs can't have memory address changed

	and const * ptrs can't have dereferenced value (ptr value) changed.

	const * const ptr locks both.


	Note: can have a * const ptr to non-const data,
	a pointer being const doesn't force data to be const!


	Also a const int* ptr can point to non-const data.
	The data pointed to is const, i.e. derefencing and assigning will not work.
	But the data itself is non-const, as it cannot be changed.
	*/

	int num7 {982};

	int * const pnum7 {&num7};

	std::cout << "pnum7: " << pnum7 << std::endl;
	std::cout << "*pnum7: " << *pnum7 << std::endl;

	*pnum7 = 500;
	std::cout << "Changing value pointed to through pnum7 pointer: " << std::endl;
	std::cout << "*pnum7: " << *pnum7 << std::endl;

	std::cout << "num7: " << num7 << std::endl;
	std::cout << std::endl;

	int var5 {100};
	const int * const p_var5 {&var5};
	std::cout << *p_var5 << std::endl;

	var5 = {200};

	std::cout << *p_var5 << std::endl;
	std::cout << std::endl;


	//Array of const pointer to const char

	const char *students [] {
		"Daniel Gray",
		"Tuna Philbe",
		"Kumar Singh",
		"Sam Ali"
	};

	std::cout << "Printing out the students: " << std::endl;
	for (const char *student: students) {
		std::cout << student << std::endl;
	};
	std::cout << std::endl;

	//These values cannot be modified as they are type const char
	// But can reassign students!
	const char *new_student {"Bob Bob"};

	students[0] = new_student;


	std::cout << "Printing out the students: " << std::endl;
	for (const char *student: students) {
		std::cout << student << std::endl;
	};
	std::cout << std::endl;

	//To prevent mutating use const char * const

	const char * const students1 [] {
		"Daniel Gray",
		"Tuna Philbe",
		"Kumar Singh",
		"Sam Ali"
	};

	//Differences between pointers and arrays
	/*
	Array name can be treated as pointer to first element of the array
	And so when stored as a pointer, can use angle brackets or derefencing to grab its value! BUT... it is not a real pointer
	*/

	int scores[10] {1,2,3,4,5,6,7,8,9,10};
	int *p_score {scores};

	std::cout << "scores: " << scores << std::endl;
	std::cout << "p_score: " << p_score << std::endl;
	std::cout << "&scores[0]: " << &scores[0] << std::endl;
	std::cout << std::endl;

	std::cout << "*scores: " << *scores << std::endl;
	std::cout << "scores[0]: " << scores[0] << std::endl;
	std::cout << "*p_score: " << *p_score << std::endl;
	std::cout << "p_score[0]: " << p_score[0] << std::endl;
	std::cout << std::endl;

	int number2 {21};

	//scores = &number2; //compile error, this "pointer" can be viewed as const

	//size(p_score); //compile error, pointers can't deduce size but arrays can



	return 0;
}