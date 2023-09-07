/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:17:08 by babreton          #+#    #+#             */
/*   Updated: 2023/08/31 15:47:09 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main() {
	ClapTrap	Robin("Robin");
	ClapTrap	Romeo("Romeo");

	Robin.attack("Roméo");
	Romeo.takeDamage(Robin.getAttackDamage());
	Romeo.beRepaired(2);

	return 0;
}