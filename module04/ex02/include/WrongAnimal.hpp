/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 13:30:43 by babreton          #+#    #+#             */
/*   Updated: 2023/09/02 13:30:45 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

typedef std::string str;

class WrongAnimal {
	public:
		WrongAnimal(str type);
		WrongAnimal();
		WrongAnimal(WrongAnimal const &src);
		~WrongAnimal();

		WrongAnimal &	operator=(WrongAnimal const &rSym);
		str			getType() const;
		void		setType();

		void	makeSound() const;
	protected:
		str	_type;
};