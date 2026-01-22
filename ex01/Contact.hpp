/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:49:20 by gaducurt          #+#    #+#             */
/*   Updated: 2026/01/22 16:56:10 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__CONTACT__
#define	__CONTACT__
#include <string>

class	Contact
{
	public:
		Contact();
		void	add_first_name(std::string str);
		void	add_last_name(std::string str);
		void	add_num(std::string str);
		void	add_id(int nb);
		int		get_id(Contact contact);
		void	switch_order();
		~Contact();
	private:
		std::string		first_name;
		std::string		last_name;
		std::string		num;
		int				id;
};

#endif
