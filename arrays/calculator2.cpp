#include <iostream>
#include <ctime>

constexpr int modulo {200};

void start_round(int num1, int num2, char op) {
	std::cout << "What's the result of " << num1 << op << num2 << " :" << std::endl;
};

size_t generate_rand_num(int modulo) {
	return (std::rand()%modulo);
}

char choose_operator(int index) {
	char ops[3] { '+', '-', '*' };

	return ops[index];
}

int calculate_result(int num1, int num2, char op) {
	switch(op) {
		case '+':
			return (num1 + num2);
		case '-':
			return (num1 - num2);
		default:
			return (num1 * num2);
	}
}

void check_guess(int guess, int result) {
	(guess == result) ?
	(std::cout << "Congratulations! You got the result " << result << " right!" << std::endl) :
	(std::cout << "Naah! the correct result is: " << result << std::endl);
}

bool play_again() {
	char play_again{};

	std::cout << "Do you want to try again? (Y | N): ";
	std::cin >> play_again;

	bool continue_play = ((play_again == 'Y') || (play_again == 'y')) ? true : false;

	return continue_play;
}

void play_game(bool continue_play) {

	int guess{};

	while (continue_play) {

		// initialize values
		int left_op = generate_rand_num(modulo);
		int right_op = generate_rand_num(modulo);
		char op = choose_operator(generate_rand_num(3));

		start_round(left_op, right_op, op);
		std::cin >> guess;

		int result = calculate_result(left_op, right_op, op);
		check_guess(guess, result);

		continue_play = play_again();
	}

	std::cout << "See you later!" << std::endl;
}

int main() {

	//initialize seed
	std::srand(std::time(0));

	play_game(true);

	return 0;
}