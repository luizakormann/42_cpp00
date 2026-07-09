/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiza <luiza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 18:51:02 by luiza             #+#    #+#             */
/*   Updated: 2026/07/09 14:06:25 by luiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
