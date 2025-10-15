/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:53:28 by gaducurt          #+#    #+#             */
/*   Updated: 2025/10/15 15:55:50 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

class	Megaphone
{
	public:
	Megaphone(int ac, char **input)
	{
		if (ac == 1)
			std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		if (ac > 1)
		{
			int	i = 1;
			while (input[i])
			{
				int	j = 0;
				while (input[i][j])
				{
					std::cout << (char)::toupper(input[i][j]);
					j++;
				}
				i++;
			}
			std::cout << "\n";
		}
	};
};

int main(int ac, char **av)
{
    Megaphone   output(ac, av);
    return (0);
}
