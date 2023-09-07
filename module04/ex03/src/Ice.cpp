/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 10:48:53 by babreton          #+#    #+#             */
/*   Updated: 2023/09/05 12:03:59 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

Ice::Ice() : AMateria::AMateria("ICE") {
	std::cout << "[C] Ice default constructor called." << std::endl;
	this->_type = AMateria::_type;
}

Ice::Ice(Ice const &src) : AMateria::AMateria(src) {
	std::cout << "[C] Ice copy constructor called." << std::endl;
	*this = src;
}

Ice::~Ice() {
	std::cout << "[D] Ice default destructor called." << std::endl;
}

Ice &	Ice::operator=(Ice const &rSym) {
	if (this != &rSym) {
		this->_type = rSym._type;
	}
	return *this;
}

/* -------------------------------------------------------------------------- */
/*                              Geteurs & seteurs                             */
/* -------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------- */
/*                              Members functions                             */
/* -------------------------------------------------------------------------- */

AMateria	*Ice::clone() const {
	return (new Ice());
}

void		Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}