/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:45:29 by babreton          #+#    #+#             */
/*   Updated: 2023/08/15 13:53:25 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(str name, Weapon &weapon) : name(name), weapon(weapon) {
}

HumanA::~HumanA() {
	
}

void	HumanA::attack() const {
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
