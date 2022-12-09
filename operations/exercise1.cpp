#include <cmath>
#include <iostream>

double convert_celsius_to_fahrenheit(double celsius) {

	double const_var = (9.0/5);

	return (const_var*celsius) + 32;
}

int main() {

	std::cout << "Please enter a degree value in Celsius: " << std::endl;

	double celsius;
	std::cin >> celsius;

	double result = convert_celsius_to_fahrenheit(celsius);

	std::cout << celsius << " Celsius is " << result << " Fahrenheit" << std::endl;

	return 0;
}