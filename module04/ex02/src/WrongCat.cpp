/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 21:25:43 by babreton          #+#    #+#             */
/*   Updated: 2023/09/02 13:36:32 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal::WrongAnimal("WRONGCAT") {
	this->_type = WrongAnimal::getType();
	std::cout << "[C] Something strange approaches.." << std::endl;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal::WrongAnimal(src) {
	*this = src;
}

WrongCat &	WrongCat::operator=(WrongCat const &rSym) {
	if (this != &rSym) {
		this->_type = rSym._type;
	}
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "[D] Something strange runs away.." << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                              Geteurs & seteurs                             */
/* -------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------- */
/*                              Members functions                             */
/* -------------------------------------------------------------------------- */