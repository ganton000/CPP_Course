#include <iostream>
#include <bitset>

int main() {

	unsigned short int data {0b11111110};


	std::cout << "data(hex): " << std::hex << std::showbase << data << std::endl;

	std::cout << "data (dec): " << std::dec <<  data << std::endl;

	//16 because the type unsigned short int is 16 bits in the system (2 bytes)
	std::cout << "sizeof(data): " << sizeof(data) << " = " << (sizeof(data)*8) << " bits" << std::endl;
	std::cout << "data (bin): " << std::bitset<16>(data) << std::endl;

	//bit shifting

	unsigned short int value {0xff0u};

	std::cout << std::endl;
	std::cout << "value: " << std::bitset<16>(value) << ", dec: " << value << std::endl;

	std::cout << std::endl;
	std::cout << "Shifting right >>>>>> " << std::endl;

	//shift right 1 bit position
	//Cast because bit shifting not supported for types shorter than int (and also only works on integral types; i.e. not floats)
	//if not explicit cast, >> will implicit cast to int
	value = static_cast<unsigned short int>(value >> 1);
	std::cout << "value : " << std::bitset<16>(value) << ", dec: " << value << " [After shift 1 bit position right]" << std::endl;

	//shift left
	value = static_cast<unsigned short int>(value << 1);
	std::cout << "value: " << std::bitset<16>(value) << ", dec: " << value << " [After shift 1 bit position left] " << std::endl;
	std::cout << std::endl;

	std::cout << "shift left 4 bit positions: " << std::endl;
	value = static_cast<unsigned short int>(value << 4);
	std::cout << "value: " << std::bitset<16>(value) << ", dec: " << value << " [After shift 4 bit position left] " << std::endl;

	return 0;
}