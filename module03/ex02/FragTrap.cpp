/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:46:15 by babreton          #+#    #+#             */
/*   Updated: 2023/09/01 09:54:55 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

FragTrap::FragTrap(str name) : ClapTrap() {
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "The heroic FragTrap " << this->name << " enter in the arena to kill the vilains !" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) {
	*this = src;
}

FragTrap::~FragTrap() {
	std::cout << "The heroic FragTrap " << this->name << " plant his sword into the ground, and leave this world with dignity." << std::endl;
}

FragTrap &	FragTrap::operator=(FragTrap const &rSym) {
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

void	FragTrap::highFivesGuys() {
	std::cout << this->name << " : Who wants a high-five ?" << std::endl;
}