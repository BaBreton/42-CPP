/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:45:37 by babreton          #+#    #+#             */
/*   Updated: 2023/08/15 13:54:14 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB {
	public:
		HumanB(str name);
		~HumanB();
		
		void	attack() const;
		void	setWeapon(Weapon &weapon);
	private:
		str		name;
		Weapon	*weapon;
};

#endif