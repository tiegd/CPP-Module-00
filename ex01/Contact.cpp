/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:26:51 by gaducurt          #+#    #+#             */
/*   Updated: 2026/01/23 19:35:36 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact()
{
	std::cout << "Création d'un contact" << std::endl;
}

void	Contact::switch_order()
{
	id--;
}

void	Contact::fill_data(int i_id)
{
	std::cout << "Firstname : ";
	std::getline(std::cin, first_name);
	std::cout << "Lastname : ";
	std::getline(std::cin, last_name);
	std::cout << "Nickname : ";
	std::getline(std::cin, nickname);
	std::cout << "Num : ";
	std::getline(std::cin, num);
	std::cout << "Darket secret : ";
	std::getline(std::cin, secret);
	id = i_id;
}

void	Contact::print_contact()
{
	std::cout << id << "|" << first_name << "|" << last_name << "|" << nickname << std::endl;
}

Contact::~Contact()
{
	std::cout << "Destruction d'un contact" << std::endl;
}
