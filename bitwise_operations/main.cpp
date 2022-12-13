#include <iostream>
#include <bitset>

int main() {

	unsigned short int data {0b11111110};


	std::cout << "data(hex): " << std::hex << std::showbase << data << std::endl;

	std::cout << "data (dec): " << std::dec <<  data << std::endl;

	//16 because the type unsigned short int is 16 bits in the system (2 bytes)
	std::cout << "sizeof(data): " << sizeof(data) << " = " << (sizeof(data)*8) << " bits" << std::endl;
	std::cout << "data (bin): " << std::bitset<16>(data) << std::endl;


	return 0;
}