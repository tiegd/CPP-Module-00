/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:16:09 by gaducurt          #+#    #+#             */
/*   Updated: 2026/01/26 14:11:54 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

int	main()
{
	PhoneBook	phonebook;
	std::string	prompt;
	
	while (std::cin.good())
	{
		std::getline(std::cin, prompt);
		if (prompt == "ADD")
		{
			phonebook.add_contact();
		}
		if (prompt == "SEARCH")
		{
			phonebook.display_phonebook();
		}
		if (prompt == "EXIT")
		return (0);
	}
	return (0);
}