/*
Because name of array is a pointer to first element of array
We can just swap the pointers instead of each element
*/

#include <iostream>



int main() {

	int arr0[5] {1,2,3,4,5};
	int arr1[5] {6,7,8,9,10};

	int* temp = arr1;

	//cannot make array name pointer elsewhere
	//arr1 = arr0; //compiler error

	//but can set up 2 pointers to point to arrays
	int *p_arr0 = arr0;
	int *p_arr1 = arr1;

	p_arr1 = p_arr0;
	p_arr0 = temp;

	for (int i{}; i < 5; ++i){
		std::cout << p_arr0[i] << std::endl;
	}


	return 0;
}