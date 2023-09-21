/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:20:20 by babreton          #+#    #+#             */
/*   Updated: 2023/09/21 11:21:15 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

int	main(int ac, char **av) {
	if (ac != 2)
	{
		std::cout << "Usage: ./convert [string]" << std::endl;
		return (0);
	}
	
	ScalarConverter::convert(av[1]);

	return 0;
}