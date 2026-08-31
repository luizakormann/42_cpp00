#include "Contact.hpp"

void	Contact::setContact(
		const std::string &firstName,
		const std::string &lastName,
		const std::string &nickname,
		const std::string &phoneNumber,
		const std::string &secret)
{
	firstName_ = firstName;
	lastName_ = lastName;
	nickname_ = nickname;
	phoneNumber_ = phoneNumber;
	secret_ = secret;
}

void	Contact::displayContact(void) const
{
	std::cout << "First name: " << firstName_ << std::endl;
	std::cout << "Last name: " << lastName_ << std::endl;
	std::cout << "Nickname: " << nickname_ << std::endl;
	std::cout << "Number: " << phoneNumber_ << std::endl;
	std::cout << "Secret: " << secret_ << std::endl;
}

const std::string	&Contact::getFirstName(void) const
{
	return (firstName_);
}

const std::string	&Contact::getLastName(void) const
{
	return (lastName_);
}

const std::string	&Contact::getNickname(void) const
{
	return (nickname_);
}

const std::string	&Contact::getNumber(void) const
{
	return (phoneNumber_);
}

const std::string	&Contact::getSecret(void) const
{
	return (secret_);
}
