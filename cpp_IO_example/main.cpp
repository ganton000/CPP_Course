#include <iostream>

int get_input_output() {

	int age;
	std::string name;

	std::cout << "Please type in your Last name and age, separated by spaces : " << std::endl;

	std::cin >> name >> age;

	std::cout << "Hello " << name << "! You are " << age << " years old." << std::endl;

	return 0;
}

int main() {

	//Output
	int age = {21};

	std::cout << "std::cout output: The age variable contains " << age << std::endl;

	//Input
	std::string name;
	std::cout << "Please type in your Last Name: " << std::endl;
	std::cin >> name;

	std::cout << "Hello " << name << std::endl;
	std::cout << std::endl;

	//Error
	std::cerr << "std::cerr output: Something went wrong" << std::endl;
	std::cout << std::endl;

	//Logs
	std::clog << "std::clog output: This is a log message" << std::endl;
	std::cout << std::endl;
	get_input_output();

	return 0;
}