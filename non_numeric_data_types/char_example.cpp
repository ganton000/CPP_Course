#include <iostream>

int main() {

	char character1 = {'a'};
	char character2 = {'b'}; //1 Byte

	std::cout << "sizeof(char): " << sizeof(character1) << std::endl;
	std::cout << std::endl;


	char ascii_character1 = 97;
	std::cout << "Character1: " << character1 << std::endl;
	std::cout << "Ascii Character1: " << ascii_character1 << std::endl;
	std::cout << std::endl;

	std::cout << "ascii_value(int) (using static_cast): " << static_cast<int>(ascii_character1) << std::endl;
	std::cout << std::endl;

	std::cout << std::boolalpha;
	std::cout << (character1 == ascii_character1) << std::endl;



	return 0;
}