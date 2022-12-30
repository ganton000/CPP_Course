/*
You are given an array of 10 integral elements and an offset value of type unsigned int.  Your job is to figure out which element we would hit if we went offset slots from the beginning of the array.

For example if your input array is :

int data[] {1,3,6,3,9,3,5,7,2,11};

and your offset is 3 , then your code should print the message exactly as shown below :

The element 3 slots away from the beginning is : 3
*/

#include <iostream>

void shoot_forward(int data[], unsigned int offset) {

	std::cout << "The element " << offset << " slots away from the beginning is : " << *(data + offset) << std::endl;
}

int main() {

	int data[] {1,3,6,3,9,3,5,7,2,11};
	unsigned int offset {3};

	shoot_forward(data, offset);

	return 0;
}