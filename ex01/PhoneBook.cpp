/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:27:32 by gaducurt          #+#    #+#             */
/*   Updated: 2026/01/23 15:20:19 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook()
{
	PhoneBook::nb_contact = 0;
	std::cout << "Création du PhoneBook" << std::endl;
}

void	PhoneBook::display_phonebook()
{
	if (PhoneBook::nb_contact == 0)
		std::cout << "The PhoneBook is empty" << std::endl;
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

void	PhoneBook::add_contact(std::string first_name, std::string last_name,
					std::string nickname, std::string num, std::string secret)
{
	if (nb_contact == 8)
	{
		PhoneBook::slide_contact();
		contact_tab[nb_contact].fill_data(first_name, last_name, nickname,
										num, secret, nb_contact);
	}
	if (nb_contact < 8)
	{
		contact_tab[nb_contact].fill_data(first_name, last_name, nickname,
										num, secret, nb_contact + 1);
		nb_contact++;
		
	}
}

PhoneBook::~PhoneBook()
{
	std::cout << "Destruction du PhoneBook" << std::endl;
}
