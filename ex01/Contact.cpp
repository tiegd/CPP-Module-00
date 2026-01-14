/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:26:51 by gaducurt          #+#    #+#             */
/*   Updated: 2026/01/14 17:26:42 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact()
{
	std::cout << "Création d'un contact" << std::endl;
}

void	Contact::add_first_name(std::string str)
{
	Contact::first_name = str;
}

void	Contact::add_last_name(std::string str)
{
	Contact::last_name = str;
}

void	Contact::add_num(std::string str)
{
	Contact::num = str;
}

void	Contact::add_order(int nb)
{
	Contact::order = nb;
}

void	Contact::switch_order()
{
	Contact::order--;
}

Contact::~Contact()
{
	std::cout << "Destruction d'un contact" << std::endl;
}
