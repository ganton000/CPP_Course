/*
Stack stores local variables, function calls, initialization
Lifetime of variables is controlled by the scope mechanism


Heap stores additional memory that can be queried at runtime
Lifetime is controlled explicitly through new and delete operations

Text loads the actual binary of the program
*/
#include <iostream>


int main() {


	int num {22}; //Stack

	int *p_num0 = &num;

	int *p_num{nullptr};

	// writing into unitialized pointer can lead to errors
	// as the memory allocated to it can be any address from OS

	int *bad_ptr; // don't do this


	// Dynamically allocates space for a single int on the heap
	// This memory belongs to the program now and system can't use it
	// until it is returned.
	// After this line executes, will have a valid memory location allocated.
	p_num = new int; // so OS points to new memory here (4 bytes cause int)

	*p_num = 77;

	delete p_num; // we return the memory back to OS, so memory is no longer ours

	p_num = nullptr; // good to reset memory to nullptr after releasing it


	int *p_num1 { new int { 22 } };
	int *p_num2 { new int };

	std::cout << "p_num1: " << *p_num1 << p_num1 << std::endl;
	std::cout << "p_num2: " << *p_num2 << p_num2 << std::endl;

	delete p_num1;
	p_num1 = nullptr;

	delete p_num2;
	p_num2 = nullptr;

	if (p_num2 != nullptr) {
		std::cout << "p_num2 - " << p_num2 << " - " << *p_num2 << std::endl;
	} else {
		std::cerr << "WARNING: Trying to use an invalid pointer" << std::endl;
	}

	// very bad to call delete twice on a pointer!!!

	return 0;
}