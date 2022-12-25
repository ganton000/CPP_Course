#include <iostream>


int main() {

	int bag_of_values [] {1,2,3,4,5,6,7,8,9,10};

	for (int value: bag_of_values) {
		//value holds a copy of the current iteration in the whole bag
		std::cout << "value: " << value  << " ";
	}

	std::cout << std::endl;

	for (int value: {1,2,3,4,5,6,7,8,9,10}) {
		//can initialize collection inside loop
		std::cout << "value: " << value  << " ";
	}

	std::cout << std::endl;

	//can let compiler specify the type
	for (auto value: {1,2,3,4,5,6,7,8,9,10}) {
		//can initialize collection inside loop
		std::cout << "value: " << value << " ";
	}


	return 0;
}