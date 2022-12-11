#include <iostream>


//Literals don't have a location in memory, are burnt into the binary in code. So they're not stored into a variable, the variable would point to them

int main() {

	//Literal types: u (or U) and l (or L) combinations for unsigned and long.

	unsigned char unsigned_char = {53u};
	unsigned char unsigned_char_2 = {53U};

	//2 Bytes
	short short_var = {-32768};
	short int short_int = {455};
	signed long int signed_long_int = {44l};
	unsigned long int unsigned_long_int = {44ul};

	signed long long int signed_long_long_int {1234ll};

	//Grouping Numbers: C++14 and onwards
	unsigned int prize {1'500'00'0u};

	//Narrowing errors are caught by the braced initializer method.
	//unsigned char distance {555u}; //Error [0~255]
	//unsigned int game_score {-20}; //Error

	//Hexadecimal literals
	int white_color {0xffffff};
	unsigned int hex_number {0x22BU}; //Dec 555

	//Octal literals: prefix with 0
	int error_octal {055}; //0 prefix implies Octal, this is not Dec 55, but Dec 45.

	//Binary Literals
	unsigned int binary_literal {0b11111111u}; //255 dec
	std::cout << "The binary literal is: " << binary_literal << std::endl;

	//Other literals
	char char_literal {'c'};
	int number_literal {15};
	float fractional_literal {1.5f};
	std::string string_literal {"Hit the road"};


	return 0;
}