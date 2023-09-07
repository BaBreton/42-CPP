/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 18:21:43 by babreton          #+#    #+#             */
/*   Updated: 2023/08/15 09:46:04 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(str name) {
	this->name = name;
	std::cout << "Be careful ! The zombie " << name << " is in the house !" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Zombie " << this->name << " died a second time." << std::endl;
}

void	Zombie::announce() {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}