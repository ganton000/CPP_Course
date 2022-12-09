#include <iostream>
#include <cmath>


int get_power(int num1, int num2) {

	return std::pow(num1, num1);
}

int main() {


	int num1 = 3;
	int num2 = 2;

	int result = get_power(num1, num2);

	std::cout << num1 << " raised to the power of " << num2 << " equals " << result << std::endl;

	return 0;
}