/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 20:33:19 by babreton          #+#    #+#             */
/*   Updated: 2023/09/02 19:11:01 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	public:
		Dog();
		Dog(Dog const &src);
		virtual ~Dog();

		Dog &	operator=(Dog const &rSym);

		void			makeSound() const;
		virtual void	think() const;
	private:
		str		_type;
		Brain	*_brain;
};