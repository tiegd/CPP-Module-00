/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:26:51 by gaducurt          #+#    #+#             */
/*   Updated: 2026/01/22 17:05:13 by gaducurt         ###   ########.fr       */
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
	first_name = str;
}

void	Contact::add_last_name(std::string str)
{
	last_name = str;
}

void	Contact::add_num(std::string str)
{
	num = str;
}

void	Contact::add_id(int nb)
{
	id = nb;
}

void	Contact::switch_order()
{
	id--;
}

int	Contact::get_id(Contact contact)
{
	return (contact.id);
}

Contact::~Contact()
{
	std::cout << "Destruction d'un contact" << std::endl;
}
