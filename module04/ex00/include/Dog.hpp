/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 20:33:19 by babreton          #+#    #+#             */
/*   Updated: 2023/09/02 13:23:45 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog();
		Dog(Dog const &src);
		~Dog();

		Dog &	operator=(Dog const &rSym);

		void	makeSound() const;
	private:
		str		_type;
};