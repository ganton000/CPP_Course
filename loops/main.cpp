#include <iostream>

const size_t COUNT {100};

void basic_for_loop() {

	// size_t: a representation of some unsigned int for positive numbers
	// (8 bytes)

	//no braces work for only 1 line
	for(size_t j{}; j < COUNT; ++j)
		std::cout << "The value of j is: " << j << std::endl;
}

unsigned int sum_up_to_99(){
	unsigned int sum{};

	for(size_t i{1}; i<100; i++) {
		sum += i;
	}

	return sum;
}

void multiple_decl_for_loop() {

	for (size_t i{0}, x{5}, y{22}; y > 15; ++i, x+=5, y-=1){
		std::cout << "i: " << i << ", x: " << x << ", y: " << y << std::endl;
	}
}

int main() {

	basic_for_loop();
	std::cout << std::endl;

	std::cout << "sizeof(size_t): " << sizeof(size_t) << std::endl;
	std::cout << "sizeof(unsigned int): " << sizeof(unsigned int) << std::endl;

	std::cout << "Sum of integers from 0 to 99 is: " << sum_up_to_99() << std::endl;

	std::cout << "Algorithm sol: (99*100)/2 == " << ((99*100)/2) << std::endl;
	std::cout << std::endl;

	multiple_decl_for_loop();
	std::cout << std::endl;

	return 0;
}