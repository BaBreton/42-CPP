/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:45:27 by babreton          #+#    #+#             */
/*   Updated: 2023/08/15 13:39:48 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
}

Weapon::Weapon(str type) {
	this->type = type;
}

Weapon::~Weapon() {
	
}

const str	&Weapon::getType() const {
	return this->type;
}


void	Weapon::setType(str ntype) {
	this->type = ntype;
}
