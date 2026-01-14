/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:48:03 by gaducurt          #+#    #+#             */
/*   Updated: 2026/01/14 17:52:20 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__PHONEBOOK__
#define __PHONEBOOK__

class	PhoneBook
{
	public:
		PhoneBook();
		void	display_phonebook();
		void	add_contact(Contact);
		void	replace_contact(Contact);
		~PhoneBook();

	private:
		int nb_contact;
};

#endif
