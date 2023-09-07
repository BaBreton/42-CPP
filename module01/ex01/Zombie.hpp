/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 10:38:48 by babreton          #+#    #+#             */
/*   Updated: 2023/08/15 11:21:34 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

typedef std::string str;

class Zombie {
	public:
		Zombie();
		~Zombie();

		void			setName(str name);
		void			announce() const;

	private:
		str		name;
};

Zombie	*zombieHorde(int n, str name);

#endif