#include "PhoneBook.hpp"

int	main(void) {
	PhoneBook	Nul;
	std::string	choice;

	for (;;) {
		std::cout << "Make your choice: EXIT, ADD or SEARCH" << std::endl;
		if (!std::getline(std::cin, choice) || !choice.compare("EXIT"))
			break ;
		else if (!choice.compare("ADD"))
			Nul.add();
		else if (!choice.compare("SEARCH"))
			Nul.sch();
	}
	return 0;
}
