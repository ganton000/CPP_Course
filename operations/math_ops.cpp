#include <iostream>
#include <cmath>


int get_power(int num1, int num2) {

	int power_res = std::pow(num1, num2);
	return power_res;
}

int main() {


	int num1 = 2;
	int num2 = 4;

	int result = get_power(num1, num2);

	std::cout << num1 << " raised to the power of " << num2 << " equals " << result << std::endl;

	return 0;
}