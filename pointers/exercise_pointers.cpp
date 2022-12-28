/*
You are given an array of integers and your job is to figure out the address where the maximum element in the array lives. For example, given

int data[] {11,2,52,53,9,13,5,7,12,11};
as the input array , you code should figure out that 53 is the maximum and store its address in a variable. Given

int data[] {181,82,22,53,19,1,51,217,12,11};
as the input array, your code should figure out that 217 is the maximum and store its address in a specified variable.
*/

#include <iostream>

int *maximum_address(int data[], unsigned int size) {

	if (size == 0) return nullptr;

	int *max_address {data}; // initialize to first value in data array

	for (unsigned int j{}; j < size; ++j) {
		max_address = *max_address > data[j] ? max_address : &data[j];
	}

	return max_address;
};


int main() {

	int data[] {11,2,52,53,9,13,5,7,12,11};
	int len = sizeof(data)/sizeof(data[0]);

	int *result = maximum_address(data, len);

	std::cout << result << std::endl;
	std::cout << *result << std::endl;

	return 0;
}