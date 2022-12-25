/*
PRINT THE CHARACTERS BELOW:
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
The characters are separated by a single space, and there is no space after Z. Note that all characters are on a single line.

ASCII Reference: https://www.asciitable.com/
*/

#include <iostream>

void print_uppercase(){
	for (unsigned char i{0}; i < 255; i++) {
		if (i >= 65 && i <= 90){
			i < 90 ? std::cout << i << char{32} : std::cout << i;
		}
	}
};

int main() {

	print_uppercase();

	return 0;
}