// write code to check if a given year is leap or not

#include <iostream>
#include <iomanip>

bool is_leap_year(unsigned int year){

	bool is_leap{};

	is_leap = ((year % 400) == 0) | ( ((year % 4) == 0) & ((year % 100) > 0) );

	return is_leap;
};

int main() {

	bool result;

	result = is_leap_year(2000);
	std::cout << "Is 2000 a leap year? " << std::boolalpha << result << std::endl;

	result = is_leap_year(1900);
	std::cout << "Is 1900 a leap year? " << std::boolalpha << result << std::endl;

	result = is_leap_year(2024);
	std::cout << "Is 2024 a leap year? " << std::boolalpha << result << std::endl;

	result = is_leap_year(2025);
	std::cout << "Is 2025 a leap year? " << std::boolalpha << result << std::endl;



	return 0;
}