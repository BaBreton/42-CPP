/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 00:30:12 by babreton          #+#    #+#             */
/*   Updated: 2023/09/24 01:11:12 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

int main() {
	Span	array(100);

	srand(time(NULL));
	try {
		// array.bigAdd(99);
		array.addNumber(10);
		array.addNumber(5);
		array.addNumber(14);
		array.addNumber(3);
		array.addNumber(7);
	}
	catch(const std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << array.longestSpan() << std::endl;
	std::cout << array.shortestSpan() << std::endl;

	return 0;
}