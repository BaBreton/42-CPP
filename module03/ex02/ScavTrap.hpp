/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:51:51 by babreton          #+#    #+#             */
/*   Updated: 2023/09/01 09:40:25 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCAVTRAP_HPP_
#define _SCAVTRAP_HPP_

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap(str name);
		ScavTrap(ScavTrap const &src);
		~ScavTrap();

		ScavTrap &	operator=(ScavTrap const &rSym);
		
		void	attack(const str &target);
		void	guardGate() const;
	private:
};

#endif