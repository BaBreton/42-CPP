/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 14:38:11 by babreton          #+#    #+#             */
/*   Updated: 2023/08/20 11:53:56 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Fixed	calcVector(Point const a, Point const b, Point const point) {
	float	first = ((point.getX().toFloat() - b.getX().toFloat()) * (a.getY().toFloat() - b.getY().toFloat()));
	float	second = ((a.getX().toFloat() - b.getX().toFloat()) * (point.getY().toFloat() - b.getY().toFloat()));

	return Fixed(first - second);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed	vAB = calcVector(a, b, point);
	Fixed	vBC = calcVector(b, c, point);
	Fixed	vCA = calcVector(c, a, point);

	if (vAB > 0 && vBC > 0 && vCA > 0)
		return true;
	if (vAB < 0 && vBC < 0 && vCA < 0)
		return true;
	return false;
}