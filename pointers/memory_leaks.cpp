#include <iostream>


int main() {

	// catching exceptions
	for (size_t i{}; i < 10; ++i) {

		try {
			int *lots_of_ints { new int [1000] };
		} catch(std::exception &ex) {
			std::cout << "Caught exception: " << ex.what() << std::endl;
		}
	}

	// using std::nothrow (if no exceptions to be thrown)

	for (size_t i{}; i < 10; ++i) {

		int *lots_of_ints2 { new(std::nothrow) int [100000000000000000] };

		// if new fails, will get nullptr returned
		if (lots_of_ints2 == nullptr) {
			std::cout << "Memory allocation failed" << std::endl;
		} else {
			std::cout << "Memory allocation succeeded" << std::endl;
		}
	}

	// Calling delete on a nullptr is OK

	int *p_num {}; //initialized to nullptr
	delete p_num;

	// So no need to overdo something as below:
	if (p_num) {
		delete p_num;
		p_num = nullptr;
	}

	int *p_number1 {new int {55}};

	// Should delete and reset here
	p_number1 = new int{44}; // memory with int {55} leaked as it lives on the heap (dynamically allocated)

	{
		int *p_number2 { new int {57} };
	}

	//Memory with int {57} leaked, as p_number2 is locally scoped
	// the access to the memory address still exists but is no longer
	// accessible by the program


	return 0;
}