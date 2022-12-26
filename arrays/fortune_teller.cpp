#include <iostream>


std::string get_message(int index) {

	std::string message {};

	switch(index) {

		case 1:
			message = " I see you laughing your lungs out. I've never seen this before";
			break;
		case 2:
			message = " I see you running away from something really scary";
			break;
		case 3:
			message = " I see you parting too much with people wearing weird clothes";
			break;
		case 4:
			message = " I see pools of money scattered all over your backyard";
			break;
		case 5:
			message = " I see many kids running in a backyard";
			break;
		case 6:
			message = " I see you in a bugatti";
			break;
		case 7:
			message = " I see dogs running around in a deserted empty city.";
			break;
		default:
			message = " I see, hmmm..., I don't see anything.";
			break;
	}

	return message;
}

int get_rand_num() {

	std::srand(std::time(0));

	return (std::rand()%9 +1);
}


void play_round(std::string name, char play_again) {

	while ((play_again == 'Y') || (play_again == 'y')) {

		int num = get_rand_num();

		std::string message = get_message(num);

		std::cout << name << ", oh dear... " << message << std::endl;

		std::cout << "Would you like another fortune? ( Y | N ): " << std::endl;
		std::cin >> play_again;
	};

	std::cout << "That's all I have for you today dear. Best wishes" << std::endl;
};


int main() {

	std::string name{};
	char play_again {'Y'};

	std::cout << "I see you have come to be told your fortune!" << std::endl;
	std::cout << "Please tell me your name: " << std::endl;
	std::cin >> name;

	play_round(name, play_again);

	return 0;
}