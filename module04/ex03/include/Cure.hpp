/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 10:49:09 by babreton          #+#    #+#             */
/*   Updated: 2023/09/05 13:46:10 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include <string>

typedef std::string str;

#include "AMateria.hpp"
#include "Character.hpp"

class Cure : public AMateria {
	public:
		Cure();
		Cure(Cure const &src);
		~Cure();

		Cure &	operator=(Cure const &rSym);

		virtual AMateria	*clone() const;
		virtual void		use(ICharacter &target);
	private:
		str	_type;
};

#endif