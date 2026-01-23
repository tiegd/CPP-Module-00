/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:48:03 by gaducurt          #+#    #+#             */
/*   Updated: 2026/01/23 18:44:46 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__PHONEBOOK__
#define __PHONEBOOK__

#include "Contact.hpp"

class	PhoneBook
{
	public:
		PhoneBook();
		void	display_phonebook();
		void	add_contact();
		void	slide_contact();
		~PhoneBook();

	private:
		Contact	contact_tab[8];
		int 	nb_contact;
};

#endif
