#include <iostream>

/*
Comma operator combines two or more expressions into a single one
The value of the operation is the value of its right most operand.
*/

int main() {

	int increment {5};
	int num1 {10};
	int num2 {20};
	int num3 {25};
	int result = (num1 *= ++increment, num2 -= (++increment), num3 += ++increment);

	std::cout << "num1: " << num1 << std::endl;
	std::cout << "num2: " << num2 << std::endl;
	std::cout << "num3: " << num3 << std::endl;
	std::cout << "result: " << result << std::endl;
}