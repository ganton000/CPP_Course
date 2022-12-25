#include <iostream>


int main() {

	unsigned int COUNT{10};
	size_t i {0};

	do {
		std::cout << "Hello" << std::endl;
		++i;
	} while ( i < COUNT );


	return 0;
}