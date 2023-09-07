/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 18:13:57 by babreton          #+#    #+#             */
/*   Updated: 2023/08/15 09:30:58 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

typedef std::string str;

class Zombie {
	public:
		Zombie(str name);
		~Zombie();

		Zombie* newZombie(str name);
		void	randomChump(str name);
	private:
		void	announce();
		str	name;
};


#endif