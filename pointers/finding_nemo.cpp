/*
You are given an array of integers and your job is to figure out the address of the smallest element , Nemo! For example, given

int data[] {11,2,52,53,9,13,5,7,12,11}
as the input , 2 is our Nemo and we should store his memory address in a pre-declared variable, min_address .
*/
#include <iostream>

int *minimum_address(int data[], unsigned int size) {

	int *min_address {data};

	for (int i{}; i < size-1; ++i) {
		min_address = *min_address < *(data + i) ? min_address : (data+i);
	}

	return min_address;
}

int main() {

	int data[] {11,2,52,53,9,13,5,7,12,11};

	int *result = minimum_address(data, std::size(data));

	std::cout << *result << std::endl;

	return 0;
}