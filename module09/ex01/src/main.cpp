/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 00:02:21 by babreton          #+#    #+#             */
/*   Updated: 2023/09/27 14:43:26 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

int	main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "Error: Usage: ./RPN \"expression\"" << std::endl; return 1;
	}

	try {
	RPN	instance(av[1]);
	}
	catch (const std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}