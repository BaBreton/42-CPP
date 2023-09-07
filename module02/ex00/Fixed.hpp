/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:37:21 by babreton          #+#    #+#             */
/*   Updated: 2023/08/17 14:15:14 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP_
#define _FIXED_HPP_

#include <iostream>

class Fixed {
	public:
		Fixed();
		Fixed(Fixed const &src);
		~Fixed();

		Fixed&	operator=(Fixed const &rSym);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int					value;
		static const int	bits = 8;
};

#endif