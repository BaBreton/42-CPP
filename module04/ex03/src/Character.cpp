/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 10:48:43 by babreton          #+#    #+#             */
/*   Updated: 2023/09/05 14:51:53 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

Character::Character(str name) : _idxTotal(0), _name(name) {
	std::cout << "[C] Character default constructor called. " << this->_name << " succesfully initialized." << std::endl;
	int idx = -1; while (++idx < 4) {
		this->_inventory[idx] = NULL;
	}
}

Character::Character(Character const &src) {
	std::cout << "[C] Character copy constructor called." << std::endl;
	*this = src;
}

Character::~Character() {
	std::cout << "[D] Character default destructor called. " << this->_name << " succesfully destroyed." << std::endl;
}

ICharacter::~ICharacter() {
	std::cout << "[D] ICharacter interface default destructor called." << std::endl;
}

Character &	Character::operator=(Character const &rSym) {
	if (this != &rSym) {
		this->_idxTotal = rSym._idxTotal;
		this->_name = rSym._name;
		int	idx = -1; while (++idx < 4)
			this->_inventory[idx] = rSym._inventory[idx];
	}
	return *this;
}

/* -------------------------------------------------------------------------- */
/*                              Geteurs & seteurs                             */
/* -------------------------------------------------------------------------- */

str const &	Character::getName() const {
	return this->_name;
}

/* -------------------------------------------------------------------------- */
/*                              Members functions                             */
/* -------------------------------------------------------------------------- */

void	Character::equip(AMateria *m) {
	if (this->_idxTotal == 4) {
		std::cout << this->_name << ": Inventory full ! Please unequip a Materia to equip : " << m->getType() << std::endl; return;
	}
	int	idx = -1; while (++idx < 4) {
		if (this->_inventory[idx] == NULL) {
			this->_inventory[idx] = m; std::cout << this->_name << " succesfully equip AMateria " << m->getType() << " at idx : " << idx << "." << std::endl; break;
		}
	}
	this->_idxTotal++;
}

void	Character::unequip(int idx) {
	if (this->_idxTotal == 0) {
		std::cout << this->_name << "'s inventory is empty ! Equip an AMateria to unequip one." << std::endl; return;
	}
	str type = this->_inventory[idx]->getType();
	this->_inventory[idx] = NULL; std::cout << this->_name << " succesfully unequip AMateria " << type << " at idx : " << idx << "." << std::endl;
	this->_idxTotal--;
}

void	Character::use(int idx, ICharacter &target) {
	if (this->_inventory[idx] == NULL) {
		std::cout << "Nothing in slot " << idx << " of " << this->_name << "'s inventory." << std::endl; return;
	}
	if (this->_inventory[idx]->getType() == "ICE") {
		Ice *ice = dynamic_cast<Ice *>(this->_inventory[idx]); ice->use(target);
	}
	else if (this->_inventory[idx]->getType() == "CURE") {
		Cure *cure = dynamic_cast<Cure *>(this->_inventory[idx]); cure->use(target);
	}
}