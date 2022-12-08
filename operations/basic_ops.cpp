#include <iostream>


int main() {

	int number1 = 2;
	int number2 = 2;
	int sum { number1 + number2 };

	std::cout << "The sum is: " << sum << std::endl;
	std::cout << std::endl;

	int value = 5;

	std::cout << "The value is: " << value << std::endl;
	std::cout << "The value is (post-fix increment): " << value++ << std::endl;
	std::cout << "The value is: " << value << std::endl;
	std::cout << std::endl;

	value = 5;
	std::cout << "The value is: " << value << std::endl;
	std::cout << "The value is (pre-fix increment): " << ++value << std::endl;
	std::cout << "The value is: " << value << std::endl;
	std::cout << std::endl;

	return 0;
}