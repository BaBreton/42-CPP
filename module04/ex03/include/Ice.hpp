/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 10:49:12 by babreton          #+#    #+#             */
/*   Updated: 2023/09/05 12:03:45 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <string>

typedef std::string str;

#include "AMateria.hpp"
#include "Character.hpp"

class Ice : public AMateria {
	public:
		Ice();
		Ice(Ice const &src);
		~Ice();

		Ice &	operator=(Ice const &rSym);

		virtual AMateria	*clone() const;
		virtual void		use(ICharacter &target);
	private:
		str	_type;
};

#endif