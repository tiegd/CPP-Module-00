/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:53:28 by gaducurt          #+#    #+#             */
/*   Updated: 2026/01/24 17:42:45 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	if (ac > 1)
	{
		int	i = 1;
		while (av[i])
		{
			int	j = 0;
			while (av[i][j])
			{
				std::cout << (char)::toupper(av[i][j]);
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
    return (0);
}
