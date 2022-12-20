#include <iostream>
#include <string>

int main() {

	int day;
	int days_past_amt;
	int rewind_days;

	std::string day_of_week[] = {
		"Monday", "Tuesday", "Wednesday", "Thursday",
		"Friday", "Saturday", "Sunday"
	};

	std::cout << "Which day is today [1: Monday, 2: Tuesday, ... , 7: Sunday]" << std::endl;

	std::cin >> day;

	if (day < 1 || day > 7) {
		std::cout << day << " is not a valid day. Bye!" << std::endl;
	} else {
		std::cout << "How many days have passed up until today: " << std::endl;

		std::cin >> days_past_amt;


		std::cout << "Today is " << day_of_week[day-1] << std::endl;

		rewind_days = (days_past_amt % 7) > (day-1) ?
			((6+day) - (days_past_amt % 7)): (day-1) - (days_past_amt % 7);


		std::cout << "If we went " << days_past_amt << " in the past, we would hit a " << day_of_week[rewind_days] << std::endl;
	}

	return 0;
}