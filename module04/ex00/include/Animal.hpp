/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 20:26:45 by babreton          #+#    #+#             */
/*   Updated: 2023/09/02 13:22:48 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

typedef std::string str;

class Animal {
	public:
		Animal(str type);
		Animal();
		Animal(Animal const &src);
		~Animal();

		Animal &	operator=(Animal const &rSym);
		str			getType() const;
		void		setType();

		virtual void	makeSound() const;
	protected:
		str	_type;
};