/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:17:08 by babreton          #+#    #+#             */
/*   Updated: 2023/09/01 15:00:45 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main() {
	DiamondTrap	Nono("Nono");
	DiamondTrap	Fou(Nono);

	Nono.attack("Test");
	Fou.attack("NONO");
	Fou.whoAmI();
	return 0;
}