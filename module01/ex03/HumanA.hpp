/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:45:34 by babreton          #+#    #+#             */
/*   Updated: 2023/08/15 13:51:58 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA {
	public:
		HumanA(str name, Weapon &weapon);
		~HumanA();

		void	attack() const;
		
	private:
		str		name;
		Weapon	&weapon;
};

#endif