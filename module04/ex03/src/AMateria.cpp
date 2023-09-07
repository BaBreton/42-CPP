/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 10:48:36 by babreton          #+#    #+#             */
/*   Updated: 2023/09/05 17:53:26 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

AMateria::AMateria() : _type("UNKNOWN") {
	std::cout << "[C] AMateria default constructor called." << std::endl;
}

AMateria::AMateria(str const &type) : _type(type) {
	std::cout << "[C] AMateria base constructor called for type : " << this->_type << "." << std::endl;
}

AMateria::AMateria(AMateria const &src) {
	std::cout << "[C] AMateria copy constructor called." << std::endl;
	*this = src;
}

AMateria::~AMateria() {
	std::cout << "[D] AMateria default destructor called." << std::endl;
}

AMateria &	AMateria::operator=(AMateria const &rSym) {
	if (this != &rSym)
		this->_type = rSym._type;
	return *this;
}

/* -------------------------------------------------------------------------- */
/*                              Geteurs & seteurs                             */
/* -------------------------------------------------------------------------- */

str const &	AMateria::getType() const {
	return this->_type;
}

/* -------------------------------------------------------------------------- */
/*                              Members functions                             */
/* -------------------------------------------------------------------------- */

void	AMateria::use(int idx, ICharacter &target) {}
