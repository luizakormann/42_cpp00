#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
	private:
		std::string phoneNumber_;
		std::string nickname_;
		std::string secret_;
		std::string firstName_;
		std::string lastName_;

	public:
		void	setContact(
					const std::string &phoneNumber,
					const std::string &nickname,
					const std::string &secret,
					const std::string &firstName,
					const std::string &lastName);
		void	displayContact(void) const;
		const std::string	&getNumber(void) const;
		const std::string	&getNickname(void) const;
		const std::string	&getSecret(void) const;
		const std::string	&getFirstName(void) const;
		const std::string	&getLastName(void) const;
};

#endif
