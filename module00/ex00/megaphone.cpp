/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:50:59 by babreton          #+#    #+#             */
/*   Updated: 2023/08/14 11:24:10 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int ac, char **av)
{
	int	i = 1;
	int	j = 0;

	if (ac == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl; return 0;
	}
	while (i < ac)
	{
		while (av[i][j] != '\0')
		{
			std::cout << (char) std::toupper(av[i][j]);
			j++;
		}
		j = 0;
		i++;
	}
	return 0;
}