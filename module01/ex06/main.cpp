/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 10:23:44 by babreton          #+#    #+#             */
/*   Updated: 2023/08/16 13:23:22 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl; return 0;
	}
	
	Harl	Harl;
	
	Harl.complain(av[1]);
}