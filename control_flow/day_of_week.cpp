#include <iostream>
#include <string>

int main() {

	int idx;

	std::string day[] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };

	std::cout << "Which day is today [1: Monday, 2: Tuesday, ... , 7: Sunday]: " << std::endl;

	std::cin >> idx;


	if (idx > 0 & idx < 8 ) {
		std::cout << "Today is " << day[idx-1] << ". Let's have some fun!" << std::endl;
	} else {
		std::cout << idx << " is not a valid day. Bye!" << std::endl;
	}

	return 0;
}