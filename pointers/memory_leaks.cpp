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

	return 0;
}