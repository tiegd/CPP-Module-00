/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:16:09 by gaducurt          #+#    #+#             */
/*   Updated: 2026/01/23 18:16:18 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

int	main()
{
	PhoneBook	phonebook;
	std::string	prompt;
	
	phonebook.display_phonebook();
	while (1)
	{
		std::cout << "prompt >>" << std::endl;
		std::cin >> prompt;
		if (prompt == "ADD")
			std::cout << "add contact" << std::endl;
		if (prompt == "SEARCH")
			std::cout << "display a contact" << std::endl;
		if (prompt == "EXIT")
			return (0);
		// std::getline(std::cin, prompt);
	}
	return (0);
}