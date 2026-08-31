#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cctype>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact				list[8];
		int					length;
		int					index;
		static std::string	truncateField(const std::string &str);
		static std::string	promptInput(const std::string &prompt, bool digitsOnly = false);
		static bool			isValidNumber(const std::string &str);
		static bool			isBlank(const std::string &str);
		void	save(const Contact &contact);
		void	search(int index) const;
		void	printTable() const;

	public:
		PhoneBook();
		void	promptAdd(void);
		void	promptSearch(void);
};

#endif
