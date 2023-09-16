/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:42:11 by babreton          #+#    #+#             */
/*   Updated: 2023/09/16 18:13:02 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

int	main() {
	Bureaucrat *	Donald = NULL;

	try {
		Donald = new Bureaucrat("Donald", 1);
		Donald->promote();
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	std::cout << *Donald << std::endl;
	delete Donald;
}