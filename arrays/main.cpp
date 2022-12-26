//Arrays store elements of the same type only
#include <iostream>

int main() {

	int scores[10]; //Array storing 10 integers

	std::cout << "scores[0]: " << scores[0] << std::endl;
	std::cout << "scores[1]: " << scores[1] << std::endl;
	std::cout << "scores[2]: " << scores[1] << std::endl;
	std::cout << "scores[9]: " << scores[9] << std::endl;

	//remaining elements are initialized to 0
	int families[5] {12, 7, 5};

	//constant arrays can't be modified
	const int multipliers [] {1,2,5};

	std::cout << "multipliers size: " << std::size(multipliers) << std::endl;

	std::cout << "Old hack to get size of array: " << (sizeof(multipliers)/sizeof(multipliers[0])) << std::endl;

	return 0;
}