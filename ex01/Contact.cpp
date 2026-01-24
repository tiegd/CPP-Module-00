/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:26:51 by gaducurt          #+#    #+#             */
/*   Updated: 2026/01/24 14:18:29 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <cstring>

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

void	Contact::print_first_name()
{
	for (int i = 0; i < 10; i++)
	{
		if (first_name[i] && i == 9)
			std::cout << ".";
		else if (first_name[i])
			std::cout << first_name[i];
		else
		{
			for (int j = i; j < 10; j++)
				std::cout << " ";
			break;
		}
	}
}

void	Contact::print_last_name()
{
	for (int i = 0; i < 10; i++)
	{
		if (last_name[i] && i == 9)
			std::cout << ".";
		else if (last_name[i])
			std::cout << last_name[i];
		else
		{
			for (int j = i; j < 10; j++)
				std::cout << " ";
			break;
		}
	}
}

void	Contact::print_nickname()
{
	for (int i = 0; i < 10; i++)
	{
		if (nickname[i] && i == 9)
			std::cout << ".";
		else if (nickname[i])
			std::cout << nickname[i];
		else
		{
			for (int j = i; j < 10; j++)
				std::cout << " ";
			break;
		}
	}
}

void	Contact::print_contact()
{
	std::cout << id << "         |";
	print_first_name();
	std::cout << "|";
	print_last_name();
	std::cout << "|";
	print_nickname();
	std::cout << std::endl;
}

Contact::~Contact()
{
	std::cout << "Destruction d'un contact" << std::endl;
}
