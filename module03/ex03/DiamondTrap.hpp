/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 10:03:16 by babreton          #+#    #+#             */
/*   Updated: 2023/09/01 14:47:02 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DIAMONDTRAP_HPP_
#define _DIAMONDTRAP_HPP_

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
	public:
		DiamondTrap(str name);
		DiamondTrap(DiamondTrap const &src);
		DiamondTrap();
		~DiamondTrap();

		DiamondTrap &	operator=(DiamondTrap const &rSym);

		void	whoAmI() const;
	private:
		str	name;
};

#endif