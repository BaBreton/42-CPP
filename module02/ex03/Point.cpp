/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 11:10:09 by babreton          #+#    #+#             */
/*   Updated: 2023/08/20 11:38:45 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

Point::Point() : x(0), y(0) {}

Point::Point(float const x, float const y) : x(x), y(y) {}

Point::Point(Point const &src) {
	*this = src;
}

Point::~Point() {}

Point & Point::operator=(Point const &rSym) {
	if (this != &rSym)
		new (this)Point(rSym.getX().toFloat(), rSym.getY().toFloat());
	return *this;
}

std::ostream &	operator<<(std::ostream &o, Point const &rSym) {
	o << "x:(" << rSym.getX() << "); y:(" << rSym.getY() << ");";
	return o;
}

/* -------------------------------------------------------------------------- */
/*                               Geteur & seteur                              */
/* -------------------------------------------------------------------------- */

Fixed const	Point::getX() const {
	return this->x;
}

Fixed const	Point::getY() const {
	return this->y;
}