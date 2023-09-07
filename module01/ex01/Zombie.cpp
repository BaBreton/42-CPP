/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 10:38:50 by babreton          #+#    #+#             */
/*   Updated: 2023/08/15 11:25:04 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
	std::cout << "Be careful ! a new zombie is in the house !" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "A zombie died a second time." << std::endl;
}

void	Zombie::announce() const {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(str name) {
	this->name = name;
}