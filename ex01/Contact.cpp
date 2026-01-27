/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:26:51 by gaducurt          #+#    #+#             */
/*   Updated: 2026/01/27 14:50:38 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <cstring>
#include <iomanip>

Contact::Contact()
{
}

void	Contact::switch_order()
{
	id--;
}

bool	Contact::check_contact()
{
	if (!first_name.length())
		return (false);
	if (!last_name.length())
		return (false);
	if (!nickname.length())
		return (false);
	if (!num.length())
		return (false);
	if (!secret.length())
		return (false);
	return (true);
}

void	Contact::delete_datas()
{
	first_name.clear();
	last_name.clear();
	nickname.clear();
	num.clear();
	secret.clear();
}

void	Contact::fill_data(int i_id)
{
	while (!check_contact())
	{
		std::cout << "Please fill all the fields\n" << std::endl;
		std::cout << "Firstname : ";
		std::getline(std::cin, first_name);
		if (!std::cin.good())
				break;
		std::cout << "Lastname : ";
		std::getline(std::cin, last_name);
		if (!std::cin.good())
				break;
		std::cout << "Nickname : ";
		std::getline(std::cin, nickname);
		if (!std::cin.good())
				break;
		std::cout << "Num : ";
		std::getline(std::cin, num);
		if (!std::cin.good())
				break;
		std::cout << "Darket secret : ";
		std::getline(std::cin, secret);
		if (!std::cin.good())
				break;
		std::cout << std::endl;
		id = i_id;
	}
}

void	Contact::print_first_name()
{
	if (first_name.length() <= 10)
		std::cout << std::setw(10) << first_name;
	else
		std::cout << first_name.substr(0, 9) << '.';
	std::cout << "|";
}

void	Contact::print_last_name()
{
	if (last_name.length() <= 10)
		std::cout << std::setw(10) << last_name;
	else
		std::cout << last_name.substr(0, 9) << '.';
	std::cout << "|";
}

void	Contact::print_nickname()
{
	if (nickname.length() <= 10)
		std::cout << std::setw(10) << nickname;
	else
		std::cout << nickname.substr(0, 9) << '.';
	std::cout << std::endl;
}

void	Contact::print_contact()
{
	std::cout << std::setw(10) << id << '|';
	print_first_name();
	print_last_name();
	print_nickname();
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
}
