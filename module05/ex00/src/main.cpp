/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:42:11 by babreton          #+#    #+#             */
/*   Updated: 2023/09/16 19:10:49 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

int	main() {
	Bureaucrat *	Donald = NULL;
	Bureaucrat *	Joe = NULL;

	try {
		Donald = new Bureaucrat("Donald", 5);
		Donald->promote();
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	Joe = new Bureaucrat(*Donald);
	std::cout << *Donald << std::endl;
	std::cout << *Joe << std::endl;
	delete Donald;
}