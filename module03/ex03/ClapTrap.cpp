/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:14:51 by babreton          #+#    #+#             */
/*   Updated: 2023/09/01 14:45:54 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

ClapTrap::ClapTrap(str name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << std::setw(15) << "ClapTrap \"" << name << "\" was created with :" << std::endl;
	std::cout << std::setw(30) << "--------------------" << std::endl;
	std::cout << std::setw(27) << "HP : " << this->hitPoints << std::endl;
	std::cout << std::setw(27) << "Energy Points : " << this->energyPoints << std::endl;
	std::cout << std::setw(27) << "Attack Damage : " << this->attackDamage << std::endl;
	std::cout << std::setw(30) << "--------------------" << std::endl << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src) {
	*this = src;
}

ClapTrap::ClapTrap() {
	std::cout << "Basic ClapTrap was created : ";
}

ClapTrap::~ClapTrap() {
	std::cout << "[DESTRUCTOR] ClapTrap " << this->name << " was destroy." << std::endl;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const &rSym) {
	if (this != &rSym) {
		this->name = rSym.getName();
		this->hitPoints = rSym.getHitPoints();
		this->energyPoints = rSym.getEnergyPoints();
		this->attackDamage = rSym.getAttackDamage();
	}
	return *this;
}

/* -------------------------------------------------------------------------- */
/*                               Geteur & seteur                              */
/* -------------------------------------------------------------------------- */

str	ClapTrap::getName() const {
	return this->name;
}
int	ClapTrap::getHitPoints() const {
	return this->hitPoints;
}
int	ClapTrap::getEnergyPoints() const {
	return this->energyPoints;
}
int	ClapTrap::getAttackDamage() const {
	return this->attackDamage;
}

void	ClapTrap::setName(str name) {
	this->name = name;
}
void	ClapTrap::setHitPoints(int hitPoints) {
	this->hitPoints = hitPoints;
}
void	ClapTrap::setEnergyPoints(int energyPoints) {
	this->energyPoints = energyPoints;
}
void	ClapTrap::setAttackDamage(int attackDamage) {
	this->attackDamage = attackDamage;
}

/* -------------------------------------------------------------------------- */
/*                              Members functions                             */
/* -------------------------------------------------------------------------- */

void	ClapTrap::attack(const str &target) {
	if (this->energyPoints > 0) {
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints -= 1;
	}
	else
		std::cout << "ClapTrap " << this->name << " doesn't have enough energy points !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "Ouch ! " << this->name << " lose " << amount << " hp !" << std::endl;
	this->hitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << this->name << " repair itself and gain " << amount << " hp !" << std::endl;
	this->hitPoints += amount;
}