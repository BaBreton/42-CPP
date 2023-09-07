/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 10:54:38 by babreton          #+#    #+#             */
/*   Updated: 2023/08/20 11:37:42 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _POINT_HPP_
#define _POINT_HPP_

#include "Fixed.hpp"
#include <iostream>

class Point {
	public:
		Point();
		Point(float const x, float const y);
		Point(Point const &src);
		~Point();

		Point &	operator=(Point const &rSym);
		Point	operator-(Point const &rSym);
		
		Fixed const	getX() const;
		Fixed const	getY() const;
		
	private:
		Fixed const	x;
		Fixed const	y;
};

std::ostream &	operator<<(std::ostream &o, Point const &rSym);

#endif