/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:49:20 by gaducurt          #+#    #+#             */
/*   Updated: 2026/01/24 13:39:33 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__CONTACT__
#define	__CONTACT__
#include <string>

class	Contact
{
	public:
		Contact();
		void	fill_data(int id);
		void	switch_order();
		void	print_contact();
		void	print_first_name();
		void	print_last_name();
		void	print_nickname();
		~Contact();
	private:
		std::string		first_name;
		std::string		last_name;
		std::string		nickname;
		std::string		num;
		std::string		secret;
		int				id;
};

#endif
