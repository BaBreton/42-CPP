/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 11:34:28 by babreton          #+#    #+#             */
/*   Updated: 2023/08/20 12:12:56 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int	main() {
	Point	a(2.02f, 0.83f);
	Point	b(2.66f, 1.68f);
	Point	c(1.24f, 1.91f);
	Point	p(2.07f, 1.46f);

	if (bsp(a, b, c, p) == true)
		std::cout << "Le point p est dans le triange." << std::endl;
	else
		std::cout << "Le point p n'est pas dans le triangle." << std::endl;
	return 0;
}