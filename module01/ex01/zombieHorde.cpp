/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 10:38:46 by babreton          #+#    #+#             */
/*   Updated: 2023/08/15 11:24:27 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int n, std::string name) {
	int		i = -1;
	Zombie	*horde = new Zombie[n];

	while (++i < n) {
		horde[i].setName(name);
		horde[i].announce();
	}
	return (horde);
}