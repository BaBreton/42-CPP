/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 21:24:29 by babreton          #+#    #+#             */
/*   Updated: 2023/09/02 19:11:01 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	public:
		Cat();
		Cat(Cat const &src);
		virtual ~Cat();

		Cat &	operator=(Cat const &rSym);

		void			makeSound() const;
		virtual void	think() const;
	private:
		str		_type;
		Brain	*_brain;
};