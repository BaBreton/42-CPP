/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:09:04 by babreton          #+#    #+#             */
/*   Updated: 2023/09/01 11:37:31 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLAPTRAP_HPP_
#define _CLAPTRAP_HPP_

#include <iostream>
#include <string>
#include <iomanip>

typedef std::string str;

class ClapTrap {
	public:
		ClapTrap(str name);
		ClapTrap(ClapTrap const &src);
		ClapTrap();
		~ClapTrap();

		ClapTrap &	operator=(ClapTrap const &rSym);

		str		getName() const;
		int		getHitPoints() const;
		int		getEnergyPoints() const;
		int		getAttackDamage() const;
		void	setName(str name);
		void	setHitPoints(int hitPoints);
		void	setEnergyPoints(int energyPoints);
		void	setAttackDamage(int attackDamage);

		virtual void	attack(const str &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
	
	protected:
		str	name;
		int	hitPoints;
		int	energyPoints;
		int	attackDamage;
};

#endif