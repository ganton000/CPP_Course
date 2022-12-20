#include <iostream>
#include <string>

const int MAX_AGE {39};
const int MIN_AGE {21};

int main() {

	int age;

	std::cout << "Please type in your age: " << std::endl;
	std::cin >> age;

	std::string result =
	(age > MAX_AGE) ? "Sorry you are too old for the treatment" :
	(age < MIN_AGE) ? "Sorry you are too young for the treatment" :
	"You are eligible for treatment!";

	std::cout << result << std::endl;


	return 0;
}