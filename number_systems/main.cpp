#include <iostream>

int main() {
	int number1 = 15; //Decimal
	int number2 = 017; //Octal
	int number3 = 0x0f; //Hexadecimal
	int number4 = 0b00001111; //Binary - C++14

	std::cout << "Number1 is: " << number1 << std::endl;
	std::cout << "Memory Size of Number1 is: " << sizeof(number1) << " bytes" << std::endl;
	std::cout << std::endl;

	std::cout << "Number2 is: " << number2 << std::endl;
	std::cout << "Memory Size of Number2 is: " << sizeof(number2) << " bytes" << std::endl;
	std::cout << std::endl;

	std::cout << "Number3 is: " << number3 << std::endl;
	std::cout << "Memory Size of Number3 is: " << sizeof(number3) << " bytes" << std::endl;
	std::cout << std::endl;

	std::cout << "Number4 is: " << number4 << std::endl;
	std::cout << "Memory Size of Number4 is: " << sizeof(number4) << " bytes" << std::endl;

	return 0;

}