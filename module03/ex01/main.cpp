/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:17:08 by babreton          #+#    #+#             */
/*   Updated: 2023/09/01 09:29:07 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main() {
	ClapTrap	Robin("Robin");
	ClapTrap	*Romeo = new ClapTrap("Roméo");
	ScavTrap	Cyril("Cyril");

	Robin.attack("Cyril");
	Cyril.takeDamage(Robin.getAttackDamage());
	Cyril.beRepaired(18);
	Cyril.guardGate();
	Cyril.attack("Romeo");
	Romeo->takeDamage(Cyril.getAttackDamage());
	delete Romeo;
	return 0;
}