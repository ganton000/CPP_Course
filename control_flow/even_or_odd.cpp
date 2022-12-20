#include <iostream>
#include <string>


bool is_even(int val) {
	bool result = val%2;
	return result;
}

int main() {

	//*val initializes the value as not a primitive, hence declares a pointer to the value
	//otherwise would need to use &val in scanf to pass the memory address
	int val;

	std::cout << "Please type in an integral value: " << std::endl;
	scanf("%i", &val);

	std::string message = is_even(val) ? "is odd\n" : "is even\n";

	printf("%i %s", val, message.c_str());


	return 0;
}