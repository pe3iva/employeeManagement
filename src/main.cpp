#include "goTo.h"
#include <iostream>

int main() {

	std::cout << "Welcome to employee management app!\n\n";

	std::cout << "Enter an username: ";
	std::string username{};
	std::cin >> username;

	std::cout << '\n' << '\n';

	std::cout << "Enter a password: ";
	std::string password{};
	std::cin >> password;

	do {

		std::cout << "Your password must be at least 5 characthers long.\n";
		std::cout << "Enter a password: ";
		std::cin >> password;

	} while (password.length() < 5);

	std::cout << "\n\n\nWelcome, " << username << "!\n\n";

	std::cout << "Choose where to go: \n\n\n";

	std::cout << "1. Add employee information\n";
	std::cout << "2. Delete employee information\n";
	std::cout << "3. Amend employee information\n";

	int destination{};

	goTo(destination);

}