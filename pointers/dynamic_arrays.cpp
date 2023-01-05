#include <iostream>


int main() {

	// Arrays allocated on the heap with the new operator


	size_t size {10};

	/* Different ways to declare an array dynamically */

	// salaries array with contain garbage values
	double *p_salaries { new double[size] };

	// all values initialized to 0
	int *p_students { new(std::nothrow) int[size]{} };

	// Allocating memory space for an array of size double vars.
	// First 5 initialized while rest will be 0's.
	double *p_scores { new(std::nothrow) double[size]{1,2,3,4,5} };

	// nullptr check
	if (p_scores) {
		for(size_t i{}; i < size; ++i) {
			std::cout << "value: " << *(p_scores + i) << std::endl;
		}
	}

	// Releasing memory
	delete[] p_scores;
	p_scores = nullptr;

	delete[] p_students;
	p_students = nullptr;

	delete[] p_salaries;
	p_salaries = nullptr;

	/*
	NOTE:
	Pointers initialized with dynamic arrays differ from arrays:
	std::size doesn't work on them and they don't support range based for loops.

	We say that the dynamically allocated array has decayed into a pointer.
	*/


	return 0;
}