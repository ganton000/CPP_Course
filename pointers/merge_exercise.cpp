#include <iostream>


void merge_arrays(int data1[], int data2[], unsigned int size1, unsigned int size2){

	int *dyn_arr { new int[size1 + size2] };

	for (unsigned int i{}; i < (size1 + size2); ++i) {
		(i < size1) ? (dyn_arr[i] = data1[i]) : (dyn_arr[i] = data2[i-size1]);
	}

    for (unsigned int i{}; i < (size1+size2); ++i) {
		std::cout << *(dyn_arr +i) << " ";
    }

	delete[] dyn_arr;

}

int main() {

	const unsigned int size1 {7};
	const unsigned int size2 {6};

	int data1[size1] {1,2,3,4,5,66,77};
	int data2[size2] {10,20,30,40,50,60};

	merge_arrays(data1, data2, size1, size2);

	return 0;
}