/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 20:26:45 by babreton          #+#    #+#             */
/*   Updated: 2023/09/02 19:14:55 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

typedef std::string str;

class AAnimal {
	public:
		AAnimal(str type);
		AAnimal();
		AAnimal(AAnimal const &src);
		virtual ~AAnimal();

		AAnimal &	operator=(AAnimal const &rSym);
		str			getType() const;
		void		setType();

		virtual void	makeSound() const = 0;
		virtual void	think() const = 0;
	protected:
		str	_type;
};