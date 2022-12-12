#include <iostream>


//implicit conversions always go from smaller type to larger type (in memory terms)

// so int + double -> double + double
// because int = 4 bytes, double = 8 bytes


/*Conversion guideline
(from smaller to larger memory size)
** int ** unsigned int ** long
** unsigned long ** long long ** unsigned long long
** float ** double ** long double
*/


int main() {

	double price {45.6};
	int units {10};

	double total_price = price*units;

	std::cout << "Total price: " << total_price << std::endl;
	std::cout << "sizeof total_price: " << sizeof(total_price) << std::endl;


	//Exception to above rule is assignment
	//Assignment operation causes implicit narrowing conversion
	//y is converted to int before assignment
	// right of assignment gets implciitly converted to left of assignment type
	int x;
	double y {45.44};
	x = y;

	std::cout << "The value of x is: " << x << std::endl;

	//Implicit cast will add up the doubles
	// then turn result into int for assignment

	double a { 12.5};
	double b { 34.6 };

	//Implicit cast
	int sum = a + b;
	std::cout << "The sum is: " << sum << std::endl;

	//Explicit cast:
	sum = static_cast<int>(a) + static_cast<int>(b);

	std::cout << "Explicit cast then sum, result: " << sum << std::endl;

	//explicit cast: sum up then cast, same as implicit cast
	sum = static_cast<int> (a+b);

	std::cout << "Sum then explicit cast, same as implicit cast, result: " << sum << std::endl;

	//old style C-cast
	//not recommended as static_cast<>() is clearer
	//and checked by compiler, if types are not compatible
	double PI {3.14};
	int int_pi = (int)(PI);
	std::cout << "int PI: " << int_pi << std::endl;

	//overflow and underflow
	unsigned char char_var {55}; //[0~255]

	unsigned char val1 {130};
	unsigned char val2 {131};

	char_var = val1 + val2; //overflow

	//Bytes reset back to 000 dec once 255 is hit.
	std::cout << "char_var: " << static_cast<int>(char_var) << std::endl;

	//Underflow
	char_var = val1-val2;

	//Bytes start from 255 and go backwards
	std::cout << "char_var (exp -1): " << static_cast<int>(char_var) << std::endl;

	return 0;
}