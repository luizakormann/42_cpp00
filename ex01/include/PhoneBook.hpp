/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiza <luiza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 17:57:59 by luiza             #+#    #+#             */
/*   Updated: 2026/07/08 18:58:54 by luiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		static bool			isWhitespaces(const std::string &str);
		void	save(const Contact &contact);
		void	search(int index) const;
		void	printTable() const;

	public:
		PhoneBook();
		void	promptAdd(void);
		void	promptSearch(void);
};

#endif
