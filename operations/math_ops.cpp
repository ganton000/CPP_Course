#include <iostream>
#include <cmath>


int get_power(int num1, int num2) {

	return std::pow(num1, num2);
}

int get_square_root(int val) {
	return std::sqrt(val);
}

int main() {


	int num1 = 16;
	int num2 = 2;

	int result = get_power(num1, num2);

	std::cout << num1 << " raised to the power of " << num2 << " equals " << result << std::endl;

	int square_rooted = get_square_root(result);

	std::cout << "The square root of " << result << " is " << square_rooted << std::endl;

	return 0;
}