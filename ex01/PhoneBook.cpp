/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:27:32 by gaducurt          #+#    #+#             */
/*   Updated: 2026/01/14 18:01:24 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook()
{
	Contact	contact[8];  
	PhoneBook::nb_contact = 0;
	std::cout << "Création du PhoneBook" << std::endl;
}

void	PhoneBook::display_phonebook()
{
	if (PhoneBook::nb_contact == 0)
		std::cout << "The PhoneBook is empty" << std::endl;
}

void	PhoneBook::replace_contact(Contact contact)
{
	
}

void	PhoneBook::add_contact(Contact contact)
{
	if (PhoneBook::nb_contact == 8)
		PhoneBook::replace_contact(contact);
	
	if (PhoneBook::nb_contact < 8)
		PhoneBook::nb_contact++;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Destruction du PhoneBook" << std::endl;
}
