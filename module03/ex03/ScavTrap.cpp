/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:51:57 by babreton          #+#    #+#             */
/*   Updated: 2023/09/01 14:55:44 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

ScavTrap::ScavTrap(str name) : ClapTrap(name) {
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "An evil ScavTrap appear, be careful with " << this->name << " and his " << this->attackDamage << " attack damage !" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src) {
	*this = src;
}

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->energyPoints = 50;
}

ScavTrap::~ScavTrap() {
	std::cout << "[DESTRUCTOR] Evil ScavTrap " << this->name << " exploded." << std::endl;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const &rSym) {
	if (this != &rSym) {
		this->name = rSym.getName();
		this->hitPoints = rSym.getHitPoints();
		this->energyPoints = rSym.getEnergyPoints();
		this->attackDamage = rSym.getAttackDamage();
	}
	return *this;
}

/* -------------------------------------------------------------------------- */
/*                              Members functions                             */
/* -------------------------------------------------------------------------- */

void	ScavTrap::attack(const str &target) {
	std::cout << "Evil ScavTrap " << this->name << " go for broke " << target << " causing him " << this->attackDamage << " attack damage" << std::endl;
}

void	ScavTrap::guardGate() const {
	std::cout << "Evil ScavTrap " << this->name << " enter in protected mode !" << std::endl;
}