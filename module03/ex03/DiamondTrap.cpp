/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 10:06:30 by babreton          #+#    #+#             */
/*   Updated: 2023/09/01 15:00:34 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

DiamondTrap::DiamondTrap(str name) : ClapTrap(name + "_clap_name") {
	this->name = ClapTrap::name;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "The diamond goat " << this->name << " appear in the arena !" << std::endl;
	std::cout << std::setw(30) << "--------------------" << std::endl;
	std::cout << std::setw(27) << "HP : " << this->hitPoints << std::endl;
	std::cout << std::setw(27) << "Energy Points : " << this->energyPoints << std::endl;
	std::cout << std::setw(27) << "Attack Damage : " << this->getAttackDamage() << std::endl;
	std::cout << std::setw(30) << "--------------------" << std::endl << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(src), ScavTrap(src), FragTrap(src) {
	*this = src;
}

DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap default constructor called.";
}

DiamondTrap::~DiamondTrap() {
	std::cout << "[DESTRUCTOR] The diamond " << this->name << " say goodbye !" << std::endl;
}

DiamondTrap &	DiamondTrap::operator=(DiamondTrap const &rSym) {
	if (this != &rSym) {
		this->name = rSym.name;
		this->hitPoints = rSym.hitPoints;
		this->energyPoints = rSym.energyPoints;
		this->attackDamage = rSym.attackDamage;
	}
	return *this;
}

/* -------------------------------------------------------------------------- */
/*                              Members functions                             */
/* -------------------------------------------------------------------------- */

void	DiamondTrap::whoAmI() const {
	std::cout << "I'm " << this->name << ", and my ClapTrap's name is " << ClapTrap::name << "." << std::endl;
}