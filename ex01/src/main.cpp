#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(int argc, char *argv[])
{
	PhoneBook	phoneBook;
	std::string	command;

	while (true)
	{
		std::cout << "Type ADD, SEARCH or EXIT: ";
		if (!std::getline(std::cin, command))
		{
			std::cout << " Exiting..." << std::endl;
			break ;
		}
		if (command == "ADD")
			phoneBook.promptAdd();
		else if (command == "SEARCH")
			phoneBook.promptSearch();
		else if (command == "EXIT")
			break ;
		else
			std::cout << "Invalid input. Options are ADD, SEARCH or EXIT."
				<< std::endl;
	}
	(void ) argc;
	(void ) argv;
	return (0);
}
