/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:46:17 by babreton          #+#    #+#             */
/*   Updated: 2023/09/01 10:59:17 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FRAGTRAP_HPP_
#define _FRAGTRAP_HPP_

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap(str name);
		FragTrap(FragTrap const &src);
		FragTrap();
		~FragTrap();

		FragTrap &	operator=(FragTrap const &rSym);

		void	highFivesGuys(void);
	private:
};

#endif