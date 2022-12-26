#include <iostream>


void play_round(std::string name, char play_again) {

	while ((play_again == 'Y') || (play_again == 'y')) {

		std::cout << "Oh dear, " << name << "I see, hmmm..., I don't see anything." << std::endl;

		std::cout << "Would you like another fortune? ( Y | N ): " << std::endl;
		std::cin >> play_again;
	};

	std::cout << "That's all I have for you today dear. Best wishes" << std::endl;
};


int main() {

	std::string name{};
	char play_again{};

	std::cout << "I see you have come to be told your fortune!" << std::endl;
	std::cout << "Please tell me your name: " << std::endl;
	std::cin >> name;

	std::cout << "Oh dear, " << name << "I see dogs running around in a deserted empty city." << std::endl;

	std::cout << "Would you like another fortune? ( Y | N ): " << std::endl;
	std::cin >> play_again;

	play_round(name, play_again);

	return 0;
}