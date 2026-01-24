/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:26:51 by gaducurt          #+#    #+#             */
/*   Updated: 2026/01/24 16:59:03 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <cstring>

Contact::Contact()
{
	// std::cout << "Création d'un contact" << std::endl;
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
	int	len = first_name.length();
	int	spaces = 10 - len;

	for (int j = 0; j < 10; j++)
	{
		if (spaces > 0)
		{
			if (j < spaces)	
				std::cout << " ";
			else
				std::cout << first_name[j - spaces];
		}
		if (spaces <= 0)
		{
			if (first_name[j] && j == 9)
			{
				std::cout << ".";
				break;
			}
			else if (first_name[j])
				std::cout << first_name[j];
		}
	}
}

void	Contact::print_last_name()
{
	int	len = last_name.length();
	int	spaces = 10 - len;

	for (int j = 0; j < 10; j++)
	{
		if (spaces > 0)
		{
			if (j < spaces)	
				std::cout << " ";
			else
				std::cout << last_name[j - spaces];
		}
		if (spaces <= 0)
		{
			if (last_name[j] && j == 9)
			{
				std::cout << ".";
				break;
			}
			else if (last_name[j])
				std::cout << last_name[j];
		}
	}
}

void	Contact::print_nickname()
{
	int	len = nickname.length();
	int	spaces = 10 - len;

	for (int j = 0; j < 10; j++)
	{
		if (spaces > 0)
		{
			if (j < spaces)	
				std::cout << " ";
			else
				std::cout << nickname[j - spaces];
		}
		if (spaces <= 0)
		{
			if (nickname[j] && j == 9)
			{
				std::cout << ".";
				break;
			}
			else if (nickname[j])
				std::cout << nickname[j];
		}
	}
}

void	Contact::print_contact()
{
	std::cout << "         " << id << "|";
	print_first_name();
	std::cout << "|";
	print_last_name();
	std::cout << "|";
	print_nickname();
	std::cout << std::endl;
}

void	Contact::print_one_contact()
{
	std::cout << "First name : " << first_name << std::endl;
	std::cout << "Last name : " << last_name  << std::endl;
	std::cout << "Nickname : " << nickname << std::endl;
	std::cout << "Phone number : " << num << std::endl;
	std::cout << "Darkest secret : " << secret << std::endl;
}

Contact::~Contact()
{
	std::cout << "Destruction d'un contact" << std::endl;
}
