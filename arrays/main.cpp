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

	//proper c-strings
	char message[] {'H', 'e', 'l', 'l', 'o', '\0'};

	std::cout << "message: " << message << std::endl;
	std::cout << "size: " << std::size(message) << std::endl;

	char message2[6] {'H', 'e', 'l', 'l', 'o'};

	std::cout << "message: " << message2 << std::endl;
	std::cout << "size: " << std::size(message2) << std::endl;

	// defines a literal C-string; appends null character '\0'
	// hence making it a c-string

	char message3[] {"Hello World!"};

	std::cout << "message: " << message3 << std::endl;
	std::cout << "size: " << std::size(message3) << std::endl;


	return 0;
}