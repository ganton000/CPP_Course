#include <iostream>


int addNumbers(int first_num, int second_num) {
	int sum = first_num + second_num;
	return sum;
}

int main() {

	int firstNum = 9;
	int secondNum {12};

	int expected_sum = firstNum + secondNum;

	int sum = addNumbers(firstNum, secondNum);

	std::cout << "The sum of " << firstNum << " and " << secondNum << " is " << expected_sum << std::endl;

	std::cout << "The addNumbers function returns " << sum << " when adding " << firstNum << " and " << secondNum << std::endl;

	return 0;
}
