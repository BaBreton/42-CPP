/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 21:25:43 by babreton          #+#    #+#             */
/*   Updated: 2023/09/02 19:19:55 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat() : Animal::Animal("CAT") {
	this->_type = Animal::getType();
	std::cout << "[C] A new Cat quietly approaches.." << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(Cat const &src) : Animal::Animal(src) {
	*this = src;
}

Cat &	Cat::operator=(Cat const &rSym) {
	if (this != &rSym) {
		this->_type = rSym._type;
	}
	return *this;
}

Cat::~Cat() {
	delete this->_brain;
	std::cout << "[D] The Cat runs away.." << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                              Geteurs & seteurs                             */
/* -------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------- */
/*                              Members functions                             */
/* -------------------------------------------------------------------------- */

void	Cat::makeSound() const {
	std::cout << "[Cat] : Meaouw.." << std::endl;
}

void	Cat::think() const {
	std::cout << "[Cat] : " + this->_brain->getRandomIdea() << std::endl;
}