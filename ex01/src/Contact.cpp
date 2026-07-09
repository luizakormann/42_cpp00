/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiza <luiza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 18:35:44 by luiza             #+#    #+#             */
/*   Updated: 2026/07/08 18:26:16 by luiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::setContact(
		const std::string &phoneNumber,
		const std::string &nickname,
		const std::string &secret,
		const std::string &firstName,
		const std::string &lastName)
{
	phoneNumber_ = phoneNumber;
	nickname_ = nickname;
	secret_ = secret;
	firstName_ = firstName;
	lastName_ = lastName;
}

void	Contact::displayContact(void) const
{
	std::cout << "Number: " << phoneNumber_ << std::endl;
	std::cout << "Nickname: " << nickname_ << std::endl;
	std::cout << "Secret: " << secret_ << std::endl;
	std::cout << "First name: " << firstName_ << std::endl;
	std::cout << "Last name: " << lastName_ << std::endl;
}

const std::string	&Contact::getNumber(void) const
{
	return (phoneNumber_);
}

const std::string	&Contact::getNickname(void) const
{
	return (nickname_);
}

const std::string	&Contact::getSecret(void) const
{
	return (secret_);
}

const std::string	&Contact::getFirstName(void) const
{
	return (firstName_);
}

const std::string	&Contact::getLastName(void) const
{
	return (lastName_);
}
