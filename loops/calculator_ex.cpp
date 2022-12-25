#include <iostream>


int main() {

	char operation;
	double operand1;
	double operand2;
	bool end {false};

	std::cout << "Welcome to Example Calculator" << std::endl;

	while (end == false) {

		std::cout << "-----------------------------------------------------" << std::endl;
		std::cout << "What operation do you want help with? " << std::endl;
		std::cout << "+,-,* and / are supported. Please choose one and type below" << std::endl;
		std::cin >> operation;

		std::cout << std::endl;
		std::cout << "Please type in your two operands, separated by a space and hit enter: " << std::endl;
		std::cin >> operand1 >> operand2;
		std::cout << std::endl;

		switch(operation) {

			case '+':
				std::cout << operand1 << " + " << operand2 << " = " << (operand1 + operand2) << std::endl;
				break;
			case '-':
				std::cout << operand1 << " - " << operand2 << " = " << (operand1 - operand2) << std::endl;
				break;
			case '*':
				std::cout << operand1 << " * " << operand2 << " = " << (operand1 * operand2) << std::endl;
				break;
			case '/':
				std::cout << operand1 << " / " << operand2 << " = " << (operand1 / operand2) << std::endl;
				break;
			default:
				std::cout << "Invalid operator provided!" << std::endl;
				break;
		}

		std::cout << "Continue ? ( Y | N ): " << std::endl;

		char go_on;
		std::cin >> go_on;

		if ((go_on == 'Y') || (go_on == 'y')) {
			end = false;
		} else {
			end = true;
		}
	}
	return 0;
}