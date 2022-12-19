#include <iostream>

const size_t COUNT {10};

void basic_for_loop() {

	//no braces work for only 1 line
	for(size_t j{}; j < COUNT; ++j)
		std::cout << "The value of j is: " << j << std::endl;
}

int main() {

	basic_for_loop();

	return 0;
}