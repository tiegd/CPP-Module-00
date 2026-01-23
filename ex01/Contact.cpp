/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:26:51 by gaducurt          #+#    #+#             */
/*   Updated: 2026/01/23 15:23:47 by gaducurt         ###   ########.fr       */
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

void	Contact::fill_data(std::string s_first_name, std::string s_last_name,
			std::string s_nickname, std::string s_num, std::string s_secret, int i_id)
{
	first_name = s_first_name;
	last_name = s_last_name;
	nickname = s_nickname;
	num = s_num;
	secret = s_secret;
	id = i_id;
}

Contact::~Contact()
{
	std::cout << "Destruction d'un contact" << std::endl;
}
