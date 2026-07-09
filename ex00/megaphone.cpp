/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiza <luiza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 18:19:46 by lukorman          #+#    #+#             */
/*   Updated: 2026/07/09 17:50:52 by luiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	int	i = 1;
	while (argv[i])
	{
		for (int j = 0; argv[i][j]; j++)
			std::cout << static_cast<char>(
				std::toupper(static_cast<unsigned char>(argv[i][j])));
		i++;
	}
	std::cout << std::endl;
	return (0);
}
