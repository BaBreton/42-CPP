/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 20:35:38 by babreton          #+#    #+#             */
/*   Updated: 2023/09/02 13:23:17 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

Animal::Animal(str type) : _type(type) {
	std::cout << "[C] Animal base constructor called for type : " << this->_type << "." << std::endl;
}

Animal::Animal() : _type("UNKNOWN") {
	std::cout << "[C] Animal default constructor called." << std::endl;
}

Animal::Animal(Animal const &src) {
	*this = src;
}

Animal &	Animal::operator=(Animal const &rSym) {
	if (this != &rSym) {
		this->_type = rSym._type;
	}
	return *this;
}

Animal::~Animal() {
	std::cout << "[D] Default destructor called for type : " << this->_type << "." << std::endl; 
}

/* -------------------------------------------------------------------------- */
/*                              Geteurs & seteurs                             */
/* -------------------------------------------------------------------------- */

str	Animal::getType() const {
	return this->_type;
}

/* ------------	-------------------------------------------------------------- */
/*                              Members functions                             */
/* -------------------------------------------------------------------------- */

void	Animal::makeSound() const {
	std::cout << "[Unknown Animal] Grrr..." << std::endl;
}