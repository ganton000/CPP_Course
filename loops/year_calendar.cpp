/*
Your task is to write a C++ program that prompts the user for a year (like 1998 or 2019) and the first week day of the year.
For example whether January 1st was a Monday, a Tuesday and  so on. Your program will then print the year calendar.
We have made it a requirement to get the first week day of the year from the user to make this program manageable at this point in the course
*/

#include <iostream>
#include <iomanip>
using namespace std;

constexpr int COL_WIDTH{5};

bool is_leap_year(int year){

	return ((year % 400) == 0) | ( ((year % 4) == 0) & ((year % 100) > 0) );
}

void create_calendar_month(int month, int start_day, bool is_leap){

	int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if (is_leap) days_in_month[1] = 29;

	int remainder = (start_day-1) ? 7-start_day : 0;
	for (int i{1}; i <= days_in_month[month]; ++i) {
		(i%7 == remainder) ? (cout << setw(COL_WIDTH) << i << endl) :
					 (cout << setw(COL_WIDTH) << i << " ");
	}

}

int main() {

	// initial variables
	int year{};
	int first_day{};

	string months_of_year[] = {"January", "February", "March", "April", "May",
				"June", "July", "August", "September", "October", "November", "December"};

	string days_of_week[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};


	cout << "Please enter a year: ";
	cin >> year;

	cout << "Enter the first day of the year [1: Monday, 2: Tuesday, ... , 7: Sunday]: ";
	cin >> first_day;

	cout << endl;

	cout << "Calendar for year " << year << endl;

	for (int i{}; i < 12; ++i) {
		cout << setw(COL_WIDTH*3) << "-- " << months_of_year[i] << " " << year << " --" << endl;

		for (string day_of_week: days_of_week) {
			(day_of_week == "Sun") ?
			(cout << setw(COL_WIDTH) << day_of_week << endl) :
			(cout << setw(COL_WIDTH) << day_of_week << " ");
		}

		//create space for start day
		for (int i{1}; i < first_day; ++i) {
			cout << "      ";
		}

		bool is_leap = is_leap_year(year);

		create_calendar_month(i, first_day, is_leap);

		cout << endl;

	}

	return 0;
}