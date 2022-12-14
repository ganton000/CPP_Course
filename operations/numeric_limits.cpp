#include <iostream>
#include <limits>


int main() {

	std::cout << "min() uses minimum positive number, lowest() uses smallest negative number" << std::endl;
	std::cout << std::endl;

	std::cout << "The range for short is from " << std::numeric_limits<short>::min() << " to " << std::numeric_limits<short>::max() << std::endl;
	std::cout << std::endl;

	std::cout << "The range for unsigned short is from " << std::numeric_limits<unsigned short>::min() << " to " << std::numeric_limits<unsigned short>::max() << std::endl;
	std::cout << std::endl;

	std::cout << "The range for int is from " << std::numeric_limits<int>::min() << " to " << std::numeric_limits<int>::max() << std::endl;
	std::cout << std::endl;

	std::cout << "The range for unsigned int is from " << std::numeric_limits<unsigned int>::min() << " to " << std::numeric_limits<unsigned int>::max() << std::endl;
	std::cout << std::endl;

	std::cout << "The range for long is from " << std::numeric_limits<long>::min() << " to " << std::numeric_limits<long>::max() << std::endl;
	std::cout << std::endl;

	std::cout << "The range for long long is from " << std::numeric_limits<long long>::min() << " to " << std::numeric_limits<long long>::max() << std::endl;
	std::cout << std::endl;

	std::cout << "The range for float is from " << std::numeric_limits<float>::min() << " to " << std::numeric_limits<float>::max() << std::endl;
	std::cout << std::endl;

	std::cout << "The range for double is from " << std::numeric_limits<double>::min() << " to " << std::numeric_limits<double>::max() << std::endl;
	std::cout << std::endl;

	std::cout << "The range for long double is from " << std::numeric_limits<long double>::min() << " to " << std::numeric_limits<long double>::max() << std::endl;
	std::cout << std::endl;


	std::cout << "------------------------------------------------------------------" << std::endl;

	std::cout << "The range (with lowest) for float is from " << std::numeric_limits<float>::lowest() << " to " << std::numeric_limits<float>::max() <<std::endl;
	std::cout << std::endl;

	std::cout << "The range (with lowest) for double is from " << std::numeric_limits<double>::lowest() << " to " << std::numeric_limits<double>::max() <<std::endl;
	std::cout << std::endl;

	std::cout << "The range (with lowest) for long double is from " << std::numeric_limits<long double>::lowest() << " to " << std::numeric_limits<long double>::max() <<std::endl;
	std::cout << std::endl;

	//Other methods
	std::cout << "std::numeric_limits<T>::is_signed; tells us if type is signed" << std::endl;
	std::cout << std::endl;
	std::cout << "std::numeric_limits<T>::digits; tells us number of digits that can be represented by the type" << std::endl;
	std::cout << std::endl;

	std::cout << "Num of digits represented by long double is: " << std::numeric_limits<long double>::digits << std::endl;


	return 0;
}