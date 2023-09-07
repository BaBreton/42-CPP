/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 21:24:29 by babreton          #+#    #+#             */
/*   Updated: 2023/09/02 13:23:39 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat();
		Cat(Cat const &src);
		~Cat();

		Cat &	operator=(Cat const &rSym);

		void	makeSound() const;
	private:
		str		_type;
};