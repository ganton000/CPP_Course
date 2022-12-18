#include <iostream>
#include <bitset>
#include <iomanip>

int main() {

	//Highlights position for bit of interest with a 1
	//Masks other positions with 0
	const unsigned char mask_bit_0 {0b00000001}; //Bit0
	const unsigned char mask_bit_1 {0b00000010}; //Bit1
	const unsigned char mask_bit_2 {0b00000100}; //Bit2
	const unsigned char mask_bit_3 {0b00001000}; //Bit3
	const unsigned char mask_bit_4 {0b00010000}; //Bit4
	const unsigned char mask_bit_5 {0b00100000}; //Bit5
	const unsigned char mask_bit_6 {0b01000000}; //Bit6
	const unsigned char mask_bit_7 {0b10000000}; //Bit7

	/*
	Can set/reset/check/toggle bit positions
	*/

	unsigned char var {0b00000000};
	int COLUMN_WIDTH = 15;

	//Setting Bits
	//Setting: |= with mask of the bit

	//Set bit 1
	std::cout << "Setting bit in position 1" << std::endl;
	var |= mask_bit_1;
	std::cout << std::setw(COLUMN_WIDTH) << "var: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

	//Set bit 5
	std::cout << "Setting bit in position 5" << std::endl;
	var |= mask_bit_5;
	std::cout << std::setw(COLUMN_WIDTH) << "var: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

	//Resetting bits

	//Reset bit position 1 to 0
	std::cout << "Resetting bit in position 1" << std::endl;
	var &= (~mask_bit_1);
	std::cout << std::setw(COLUMN_WIDTH) << "var: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

	//Masking multiple bits at once
	std::cout << "Setting all bits" << std::endl;
	var |= ( mask_bit_0 | mask_bit_1 | mask_bit_2 | mask_bit_3 | mask_bit_4 | mask_bit_5 | mask_bit_6 | mask_bit_7 );
	std::cout << std::setw(COLUMN_WIDTH) << "var: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;


	std::cout << "Reset bits at pos 0,2,4,6" << std::endl;
	var &= ~( mask_bit_0 | mask_bit_2 | mask_bit_4 | mask_bit_6 );
	std::cout << std::setw(COLUMN_WIDTH) << "var: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

	//Checking bits

	//Check bit at position 5
	std::cout << "Check bit at position 5" << std::endl;
	std::cout << std::setw(COLUMN_WIDTH) << "var: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(( (var & mask_bit_5 ) >> 5 )) << std::endl;
	std::cout << std::boolalpha;
	std::cout << std::setw(COLUMN_WIDTH) << "Does bit in position 5 exist?: " << static_cast<bool>(( (var & mask_bit_5 ) >> 5 )) << std::endl;
	std::cout << std::noboolalpha;


	//Check bit at position 4
	std::cout << "Check bit at position 4" << std::endl;
	std::cout << std::setw(COLUMN_WIDTH) << "var: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(( (var & mask_bit_4 ) >> 4 )) << std::endl;
	std::cout << std::boolalpha;
	std::cout << std::setw(COLUMN_WIDTH) << "Does bit in position 4 exist?: " << static_cast<bool>(( (var & mask_bit_4 ) >> 4 )) << std::endl;
	std::cout << std::noboolalpha;

	//Toggling bits (XOR ^ operator)

	//Toggle bit at position 4
	std::cout << "Toggle bit at position 4" << std::endl;
	std::cout << std::setw(COLUMN_WIDTH) << "Start var: " << std::bitset<8>(var) << std::endl;
	var ^= mask_bit_4;
	std::cout << std::setw(COLUMN_WIDTH) << "var: " << std::bitset<8>(var) << std::endl;



	return 0;
}