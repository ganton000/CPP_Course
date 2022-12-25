#include <iostream>


int main() {

	//for while-loops, iterators declared on outside

	const unsigned int COUNT {10};
	unsigned int i{0};

	while (i < COUNT) {
		std::cout << "I love C++" << std::endl;
		++i;
	}

	return 0;
}