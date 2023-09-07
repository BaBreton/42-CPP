/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:51:51 by babreton          #+#    #+#             */
/*   Updated: 2023/09/01 11:42:42 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCAVTRAP_HPP_
#define _SCAVTRAP_HPP_

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap(str name);
		ScavTrap(ScavTrap const &src);
		ScavTrap();
		~ScavTrap();

		ScavTrap &	operator=(ScavTrap const &rSym);
		
		virtual void	attack(const str &target);
		void	guardGate() const;
	private:
};

#endif