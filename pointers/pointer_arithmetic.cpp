#include <iostream>



int main () {

	int scores[] {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

	int *p_score {scores};

	std::cout << "Values in scores array (p_score ptr increment): " << std::endl;
	std::cout << "Address: " << p_score << " value: " << *(p_score) << std::endl;
	++p_score;

	std::cout << "Address: " << p_score << " value: " << *(p_score) << std::endl;
	++p_score;

	std::cout << "Address: " << p_score << " value: " << *(p_score) << std::endl;
	++p_score;

	std::cout << "Address: " << p_score << " value: " << *(p_score) << std::endl;
	++p_score;

	std::cout << "Address: " << p_score << " value: " << *(p_score) << std::endl;
	++p_score;

	std::cout << std::endl;

	p_score = scores; //Reset pointer to start of array
	std::cout << "scores[4]: " << *(p_score + 4) << std::endl;
	//Moves forward by 4*sizeof(int) bytes
	std::cout << std::endl;

	p_score = scores;
	for (size_t i{0}; i < std::size(scores); ++i) {
		std::cout << "Value: " << *(p_score+i) << std::endl;
	}

	std::cout << std::endl;


	//can also increment the array itself

	std::cout << "Elements in reverse order with decrementing pointer arithmetic: " << std::endl;

	for (size_t i{std::size(scores)}; i > 0; --i) {
		std::cout << "Value: " << *(scores + i - 1) << std::endl;
	}

	std::cout << std::endl;

	std::cout << "Elements in reverse order -- arithmetic on the p_score pointer: " << std::endl;
	p_score = scores + std::size(scores) - 1;
	for (size_t i{std::size(scores)}; i > 0; --i) {
		std::cout << "Value: " << *(p_score--) << std::endl;
	}

	std::cout << std::endl;

	scores[1] = 31;
	*(scores +1) = 33;
	std::cout << scores[1] << std::endl;

	return 0;
}