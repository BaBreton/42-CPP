/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:34:10 by babreton          #+#    #+#             */
/*   Updated: 2023/09/21 13:38:18 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Data.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

Data::Data() : _size(10) {
	std::cout << "[C] Data default constructor called." << std::endl;
}

Data::Data(Data const &src) {
	std::cout << "[C] Data copy constructor called." << std::endl;
	*this = src;
}

Data::~Data() {
	std::cout << "[D] Data default destructor called." << std::endl;
}

Data &	Data::operator=(Data const &rSym) {
	if (this != &rSym) {
		this->_size = rSym._size;
	}
	return *this;
}

std::ostream &	operator<<(std::ostream & o, Data const &rSym) {
	o << rSym.getSize();
	return o;
}

/* -------------------------------------------------------------------------- */
/*                              Geteurs & seteurs                             */
/* -------------------------------------------------------------------------- */

int	Data::getSize() const {
	return this->_size;
}

/* -------------------------------------------------------------------------- */
/*                              Members functions                             */
/* -------------------------------------------------------------------------- */