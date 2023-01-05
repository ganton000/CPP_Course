#include <iostream>


int main() {

	// Arrays allocated on the heap with the new operator

	size_t size {10};


	// salaries array with contain garbage values
	double *p_salaries { new double[size] };

	// all values initialized to 0
	int *p_students { new(std::nothrow) int[size]{} };

	// Allocating memory space for an array of size double vars.
	// First 5 initialized while rest will be 0's.
	double *p_scores { new(std::nothrow) double[size]{1,2,3,4,5} };

	return 0;
}