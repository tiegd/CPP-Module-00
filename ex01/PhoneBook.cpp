/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:27:32 by gaducurt          #+#    #+#             */
/*   Updated: 2026/01/13 14:54:46 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    std::cout << "Création du PhoneBook" << std::endl;
}
PhoneBook::~PhoneBook()
{
    std::cout << "Destruction du PhoneBook" << std::endl;
}
