#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	length = 0;
	index = 0;
}

std::string	PhoneBook::promptInput(const std::string &prompt, bool digitsOnly)
{
	std::string	input;

	while (true)
	{
		std::cout << prompt;
		if (!std::getline(std::cin, input))
		{
			std::cout << " Exiting..." << std::endl;
			std::exit(0);
		}
		if (isBlank(input))
		{
			std::cout << "No empty inputs!" << std::endl;
			continue ;
		}
		if (digitsOnly && !isValidNumber(input))
		{
			std::cout << "Only digits are allowed in this field." << std::endl;
			continue ;
		}
		return (input);
	}
}

void	PhoneBook::promptAdd(void)
{
	Contact		contact;
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	secret;

	firstName = promptInput("First Name: ");
	lastName = promptInput("Last Name: ");
	nickname = promptInput("Nickname: ");
	phoneNumber = promptInput("Number: ", true);
	secret = promptInput("Secret: ");

	contact.setContact(firstName, lastName, nickname, phoneNumber, secret);
	save(contact);
}

void	PhoneBook::save(const Contact &contact)
{
	if (length == 8)
		std::cout << "Phonebook full! Oldest contact has been replaced"
					<< std::endl;
	list[index] = contact;
	index = (index + 1) % 8;
	if (length < 8)
		length++;
}

void	PhoneBook::promptSearch(void)
{
	std::string	indexStr;

	if (length == 0)
	{
		std::cout << "Phonebook is empty." << std::endl;
		return ;
	}
	printTable();
	indexStr = promptInput("Index: ");
	if (!isValidNumber(indexStr))
	{
		std::cout << "Invalid index: please enter a positive number."
			<< std::endl;
		return ;
	}
	search(std::atoi(indexStr.c_str()));
}

void	PhoneBook::printTable() const
{
	std::cout << std::setw(10) << "Index" << "|"
		<< std::setw(10) << "First Name" << "|"
		<< std::setw(10) << "Last Name"  << "|"
		<< std::setw(10) << "Nickname" << std::endl;

	for (int i = 0; i < length; i++)
	{
		std::cout << std::setw(10) << i << "|"
			<< std::setw(10) << truncateField(list[i].getFirstName()) << "|"
			<< std::setw(10) << truncateField(list[i].getLastName()) << "|"
			<< std::setw(10) << truncateField(list[i].getNickname())
			<< std::endl;
	}
}

std::string	PhoneBook::truncateField(const std::string &str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

bool	PhoneBook::isValidNumber(const std::string &str)
{
	if (str.empty())
		return (false);
	for (std::string::size_type i = 0; i < str.size(); i++)
	{
		if (!std::isdigit(static_cast<unsigned char>(str[i])))
			return (false);
	}
	return (true);
}

bool	PhoneBook::isBlank(const std::string &str)
{
	for (std::string::size_type i = 0; i < str.size(); i++)
	{
		if (!std::isspace(static_cast<unsigned char>(str[i])))
			return (false);
	}
	return (true);
}

void	PhoneBook::search(int index) const
{
	if (index >= 0 && index < length)
		list[index].displayContact();
	else
		std::cout << "Index out of range." << std::endl;
}
