/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:45:33 by babreton          #+#    #+#             */
/*   Updated: 2023/08/15 13:39:51 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <string>
#include <iostream>

typedef std::string str;

class Weapon {
	public:
		Weapon();
		Weapon(str type);
		~Weapon();

		const str	&getType() const;
		void		setType(str ntype);
	private:
		str	type;
};

#endif