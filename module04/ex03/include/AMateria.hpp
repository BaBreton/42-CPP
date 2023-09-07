/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 10:49:05 by babreton          #+#    #+#             */
/*   Updated: 2023/09/05 13:45:52 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

typedef std::string str;

class ICharacter;

class AMateria {
	public:
		AMateria();
		AMateria(str const &type);
		AMateria(AMateria const &src);
		~AMateria();

		AMateria &	operator=(AMateria const &rSym);
		str const &	getType() const;

		virtual AMateria	*clone() const = 0;
		virtual void		use(int idx, ICharacter &target);
	protected:
		str	_type;
};

#endif