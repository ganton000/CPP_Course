#include <ios>
#include <iomanip>
#include <iostream>

int main() {

	std::cout << "Hello\n";
	std::cout << "World!\n";
	std::cout << std::endl;

	std::cout << "Formatted table: " << std::endl;

	int col_width = 10;

	std::cout << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Firstname" << std::endl;
	std::cout << std::setw(col_width) << "Anton" << std::setw(col_width) << "George" << std::endl;
	std::cout << std::setw(col_width) << "Danton" << std::setw(col_width) << "The Great" << std::endl;
	std::cout << std::setw(col_width) << "Lucy" << std::setw(col_width) << "Bell" << std::endl;
	std::cout << std::endl;

	std::cout << "Formatted table (justified to right): " << std::endl;

	std::cout << std::right;
	std::cout << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Firstname" << std::endl;
	std::cout << std::setw(col_width) << "Anton" << std::setw(col_width) << "George" << std::endl;
	std::cout << std::setw(col_width) << "Danton" << std::setw(col_width) << "The Great" << std::endl;
	std::cout << std::setw(col_width) << "Lucy" << std::setw(col_width) << "Bell" << std::endl;
	std::cout << std::endl;


	std::cout << "Formatted table (justified to left): " << std::endl;

	std::cout << std::left;
	std::cout << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Firstname" << std::endl;
	std::cout << std::setw(col_width) << "Anton" << std::setw(col_width) << "George" << std::endl;
	std::cout << std::setw(col_width) << "Danton" << std::setw(col_width) << "The Great" << std::endl;
	std::cout << std::setw(col_width) << "Lucy" << std::setw(col_width) << "Bell" << std::endl;
	std::cout << std::endl;

	std::cout << "Formatted table (left justified with '-' as filler): " << std::endl;

	std::cout << std::left << std::setfill('-');
	std::cout << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Firstname" << std::endl;
	std::cout << std::setw(col_width) << "Anton" << std::setw(col_width) << "George" << std::endl;
	std::cout << std::setw(col_width) << "Danton" << std::setw(col_width) << "The Great" << std::endl;
	std::cout << std::setw(col_width) << "Lucy" << std::setw(col_width) << "Bell" << std::endl;
	std::cout << std::endl;

	int var = 30;

	std::cout << "int var (dec): " << std::dec << var << std::endl;
	std::cout << "int var (hex): " << std::hex << var << std::endl;
	std::cout << "int var (octal): " << std::oct << var << std::endl;
	std::cout << std::endl;


	double var2 = 40.0;

	std::cout << "double var (dec): " << std::dec << var2 << std::endl;
	std::cout << "double var (hex): " << std::hex << var2 << std::endl;
	std::cout << "double var (octal): " << std::oct << var2 << std::endl;
	std::cout << std::endl;

	std::cout << "These number systems don't alter floating point/decimals" << std::endl;
	std::cout << std::endl;



	std::cout << "use std::showbase to prefix values by number system" << std::endl;
	std::cout << std::showbase;
	std::cout << "int var (dec): " << std::dec << var << std::endl;
	std::cout << "int var (hex): " << std::hex << var << std::endl;
	std::cout << "int var (octal): " << std::oct << var << std::endl;
	std::cout << std::endl;

	std::cout << "Other manipulators are: " << std::endl;
	std::cout << "std::uppercase; std::nouppercase" << std::endl;
	std::cout << std::endl;
	std::cout << "std::scientific;  std::fixed; for notation/precision shown" << std::endl;
	std::cout << std::endl;
	std::cout << "std::cout.unsetf(std::ios::scientific | std::ios::fixed); to set back to default" << std::endl;
	std::cout << std::endl;
	std::cout << "std::setprecision(int_val); to set precision for output" << std::endl;
	std::cout << "std::setprecision(6); sets back to default precision" << std::endl;
	std::cout << std::endl;
	std::cout << "std::showpoint; shows decimal point for float/doubles" << std::endl;
	std::cout << std::endl;
	std::cout << "std::left; std::right; std::internal; for value justification" << std::endl;
	std::cout << std::endl;
	std::cout << "std::showpos; std::noshowpos; to show + sign for positive nums" << std::endl;
	std::cout << std::endl;
	std::cout << "std::dec; std::hex; std::oct; controls default num system" << std::endl;
	std::cout << std::endl;
	std::cout << "std::setw(num); changes width of next input/output field" << std::endl;
	std::cout << std::endl;
	std::cout << "std::flush; flushes the output buffer/stream to terminal (or final destination)" << std::endl;
	std::cout << std::endl;
	std::cout << "std::setfill(''); changes fill character" << std::endl;
	std::cout << std::endl;

	std::cout << "Docs: https://en.cppreference.com/w/cpp/io/manip" << std::endl;

	return 0;
}