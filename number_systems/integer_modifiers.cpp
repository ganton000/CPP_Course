#include <iostream>

int main() {

	short short_var{-32768}; // 2 Bytes
	short int short_int {455};
	signed short signed_short {122};
	signed short int signed_short_int {-456};
	unsigned short int unsigned_short_int{456};

	std::cout << "Short: " << short_var << ", size: " << sizeof (short_var) <<std::endl;
	std::cout << "Short Int: " << short_int << ", size: " << sizeof (short_int) <<std::endl;
	std::cout << "Signed Short: " << signed_short << ", size: " << sizeof (signed_short) <<std::endl;
	std::cout << "Signed Short Int: " << signed_short_int << ", size: " << sizeof (signed_short_int) <<std::endl;
	std::cout << "Unsigned Short Int: " << unsigned_short_int << ", size: " << sizeof (unsigned_short_int) <<std::endl;
	std::cout << std::endl;

	int int_var (55); //4 Bytes
	signed signed_var {66};
	signed int signed_int {77};
	unsigned int unsigned_int{77};

	std::cout << "Int: " << int_var << ", size: " << sizeof (int_var) <<std::endl;
	std::cout << "Signed: " << signed_var << ", size: " << sizeof (signed_var) <<std::endl;
	std::cout << "Signed Int: " << signed_int << ", size: " << sizeof (signed_int) <<std::endl;
	std::cout << "Unsigned Int: " << unsigned_int << ", size: " << sizeof (unsigned_int) <<std::endl;
	std::cout << std::endl;

	long long_var {88}; // 4 OR 8 Bytes
	long int long_int {33};
	signed long signed_long {44};
	signed long int signed_long_int {44};
	unsigned long int unsigned_long_int{44};

	std::cout << "Long: " << long_var << ", size: " << sizeof (long_var) <<std::endl;
	std::cout << "Long Int: " << long_int << ", size: " << sizeof (long_int) <<std::endl;
	std::cout << "Signed Long: " << signed_long << ", size: " << sizeof (signed_long) <<std::endl;
	std::cout << "Signed Long Int: " << signed_long_int << ", size: " << sizeof (signed_long_int) <<std::endl;
	std::cout << "Unsigned Long Int: " << unsigned_long_int << ", size: " << sizeof (unsigned_long_int) <<std::endl;
	std::cout << std::endl;

	long long long_long {888}; //8 Bytes
	long long int long_long_int {999};
	signed long long signed_long_long {444};
	signed long long int signed_long_long_int {1234};
	unsigned long long int unsigned_long_long_int {1234};

	std::cout << "Long Long: " << long_long << ", size: " << sizeof (long_long) <<std::endl;
	std::cout << "Long Long Int: " << long_long_int << ", size: " << sizeof (long_long_int) <<std::endl;
	std::cout << "Signed Long Long: " << signed_long_long << ", size: " << sizeof (signed_long_long) <<std::endl;
	std::cout << "Signed Long Long Int: " << signed_long_long_int << ", size: " << sizeof (signed_long_long_int) <<std::endl;
	std::cout << "Unsigned Long Long Int: " << unsigned_long_long_int << ", size: " << sizeof (unsigned_long_long_int) <<std::endl;
	std::cout << std::endl;

	return 0;
}