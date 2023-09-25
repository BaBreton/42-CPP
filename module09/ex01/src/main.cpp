/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 00:02:21 by babreton          #+#    #+#             */
/*   Updated: 2023/09/26 00:07:57 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

int	main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "Error: Usage: ./RPN \"expression\"" << std::endl; return 1;
	}

	RPN	instance(av[1]);

	return 0;
}