/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:49:20 by gaducurt          #+#    #+#             */
/*   Updated: 2026/01/23 15:23:52 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__CONTACT__
#define	__CONTACT__
#include <string>

class	Contact
{
	public:
		Contact();
		void	fill_data(std::string s_first_name, std::string s_last_name,
					std::string s_nickname, std::string s_num, std::string s_secret, int id);
		void	switch_order();
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
