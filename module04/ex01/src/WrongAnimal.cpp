/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 20:35:38 by babreton          #+#    #+#             */
/*   Updated: 2023/09/02 13:30:26 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

WrongAnimal::WrongAnimal(str type) : _type(type) {
	std::cout << "[C] WrongAnimal base constructor called for type : " << this->_type << "." << std::endl;
}

WrongAnimal::WrongAnimal() : _type("UNKNOWN") {
	std::cout << "[C] WrongAnimal default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) {
	*this = src;
}

WrongAnimal &	WrongAnimal::operator=(WrongAnimal const &rSym) {
	if (this != &rSym) {
		this->_type = rSym._type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "[D] Default destructor called for type : " << this->_type << "." << std::endl; 
}

/* -------------------------------------------------------------------------- */
/*                              Geteurs & seteurs                             */
/* -------------------------------------------------------------------------- */

str	WrongAnimal::getType() const {
	return this->_type;
}

/* ------------	-------------------------------------------------------------- */
/*                              Members functions                             */
/* -------------------------------------------------------------------------- */

void	WrongAnimal::makeSound() const {
	std::cout << "[Unknown WrongAnimal] Grrbadabibobidap..." << std::endl;
}