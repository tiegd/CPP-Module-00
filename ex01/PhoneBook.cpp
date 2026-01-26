/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:27:32 by gaducurt          #+#    #+#             */
/*   Updated: 2026/01/26 15:56:06 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook()
{
	PhoneBook::nb_contact = 0;
}

void	PhoneBook::display_phonebook()
{
	if (PhoneBook::nb_contact == 0)
		std::cout << "The PhoneBook is empty" << std::endl;
	else
	{
		for (int i = 0; i < nb_contact; i++)
		contact_tab[i].print_contact();
		while (1)
		{
			if (nb_contact == 1)
				std::cout << "Please enter the index contact : ";
			else
				std::cout << "Please enter an index contact between  1 and " << nb_contact << " : ";
			std::string	index;
			std::getline(std::cin, index);
			if (!std::cin.good())
				break;
			std::stringstream ss(index);
			int	i;
			if (index.empty() || (ss >> i).fail() || !ss.eof() || i <= 0 || i > nb_contact)
				std::cout << "Invalid index, please try again !" << std::endl;
			else
			{
				contact_tab[i - 1].print_one_contact();
				break;
			}
		}
	}
		
}

void	PhoneBook::slide_contact()
{
	int	i;
	
	i = 0;
	while (i < 7)
	{
		contact_tab[i] = contact_tab[i + 1];
		contact_tab[i].switch_order();
		i++;
	}
}

void	PhoneBook::add_contact()
{
	if (nb_contact == 8)
	{
		PhoneBook::slide_contact();
		contact_tab[7].delete_datas();
		contact_tab[7].fill_data(nb_contact);
	}
	if (nb_contact < 8)
	{
		contact_tab[nb_contact].fill_data(nb_contact + 1);
		nb_contact++;
	}
}

PhoneBook::~PhoneBook()
{
}
