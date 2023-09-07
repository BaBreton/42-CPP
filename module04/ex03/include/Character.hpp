/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 10:49:07 by babreton          #+#    #+#             */
/*   Updated: 2023/09/05 18:31:39 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "Ice.hpp"
#include "Cure.hpp"

typedef std::string str;

class ICharacter {
	public:
		virtual ~ICharacter();
		
		virtual str const &	getName() const = 0;
		virtual void		equip(AMateria *m) = 0;
		virtual void		unequip(int idx) = 0;
		virtual void		use(int idx, ICharacter &target) = 0;
};

class Character : public ICharacter {
	public:
		Character(str name);
		Character(Character const &src);
		virtual	~Character();

		Character &			operator=(Character const &rSym);
		virtual str const &	getName() const;

		virtual void		equip(AMateria *m);
		virtual void		unequip(int idx);
		virtual void		use(int idx, ICharacter &target);
	private:
		int			_idxTotal;
		str			_name;
		AMateria	*_inventory[4];
};

#endif