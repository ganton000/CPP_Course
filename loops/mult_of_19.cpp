/*
write a do while loop that prints multiples of 19 in the range starting from 100 up to 1000 .
The multiples of 19 should be separated by a single space and there should be a single space after the last one.
*/
#include <iostream>


void multiples_of_19() {

	const unsigned int COUNT{1000};
	int i{};
	int mult_of_19{};

	do {

	} while (i < COUNT);
};

void mult_of_19() {


	const unsigned int COUNT{1000};
	int i = 19*(100%19) + 19;
	int mult_of_19{};

	do {
		((COUNT-i) < (1000 - 19)) ? (std::cout << i << " ", i += 19) : (std::cout << i, i += 19);
	} while (i < COUNT);
};


int main() {

	mult_of_19();

	return 0;
}