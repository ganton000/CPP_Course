//Arrays store elements of the same type only
#include <iostream>
#include <ctime>

void generate_rand_num() {

	//using std::rand() generates a number between 0 and RAND_MAX

	std::cout << std::endl;
	std::cout << "RAND_MAX: " << RAND_MAX << std::endl;
	std::cout << std::endl;

	int random_num = std::rand();
	std::cout << "number (before seed): " << random_num << std::endl;

	random_num = std::rand();
	std::cout << "number (before seed): " << random_num << std::endl;


}
int main() {

	int scores[10]; //Array storing 10 integers

	std::cout << "scores[0]: " << scores[0] << std::endl;
	std::cout << "scores[1]: " << scores[1] << std::endl;
	std::cout << "scores[2]: " << scores[1] << std::endl;
	std::cout << "scores[9]: " << scores[9] << std::endl;

	//remaining elements are initialized to 0
	int families[5] {12, 7, 5};

	//constant arrays can't be modified
	const int multipliers [] {1,2,5};

	std::cout << "multipliers size: " << std::size(multipliers) << std::endl;

	std::cout << "Old hack to get size of array: " << (sizeof(multipliers)/sizeof(multipliers[0])) << std::endl;

	//proper c-strings
	char message[] {'H', 'e', 'l', 'l', 'o', '\0'};

	std::cout << "message: " << message << std::endl;
	std::cout << "size: " << std::size(message) << std::endl;

	char message2[6] {'H', 'e', 'l', 'l', 'o'};

	std::cout << "message: " << message2 << std::endl;
	std::cout << "size: " << std::size(message2) << std::endl;

	// defines a literal C-string; appends null character '\0'
	// hence making it a c-string

	char message3[] {"Hello World!"};

	std::cout << "message: " << message3 << std::endl;
	std::cout << "size: " << std::size(message3) << std::endl;

	generate_rand_num();

	//Time since Jan 1st, 1970 at 00:00:00 AM
	std::cout << std::endl;
	std::cout << "std::time(0): " << std::time(0) << std::endl;
	std::cout << std::endl;

	//Adding seeds to a program
	//Seeds tell compiler to re-process/generate the function/code/program
	//Seed-random value based on each new second in time
	std::srand(std::time(0));

	int random_num {};
	for (size_t i{}; i < 5; ++i) {
		random_num = (std::rand()%15)+1; // [1~15]
		std::cout << "number (after seed): " << random_num << std::endl;
	}

	std::cout << std::endl;
	//Declaring a 2d array
	int packages [4][3]; //Occupies 48 bytes in memory

	// 4*3*4bytes = 48
	std::cout << "Size of packages: " << sizeof(packages) << std::endl;

	//Element count in packages will be 4
	//Because packages contains 4 rows and 3 columns,
	//we say that packages contains 4 items; each of which contains 3 items

	std::cout << "Element count in packages: " << std::size(packages) << std::endl;

	std::cout << std::endl;

	for (size_t i{0}; i < std::size(packages); ++i) {

		for (size_t j{0}; j < std::size(packages[i]); ++j) {
			std::cout << "Item (" << i << "," << j << ") :" << packages[i][j] << std::endl;
		}
	}

	return 0;
}