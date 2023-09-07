/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 10:49:52 by babreton          #+#    #+#             */
/*   Updated: 2023/08/18 10:49:53 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP_
#define _FIXED_HPP_

#include <iostream>

class Fixed {
	public:
		Fixed();
		Fixed(Fixed const &src);
		Fixed(const int n);
		Fixed(const float f);
		~Fixed();

		Fixed&			operator=(Fixed const &rSym);
		Fixed			operator+(Fixed const &rSym) const;
		Fixed			operator-(Fixed const &rSym) const;
		Fixed			operator*(Fixed const &rSym) const;
		Fixed			operator/(Fixed const &rSym) const;
		bool			operator<(Fixed const &rSym) const;
		bool			operator>(Fixed const &rSym) const;
		bool			operator<=(Fixed const &rSym) const;
		bool			operator>=(Fixed const &rSym) const;
		bool			operator==(Fixed const &rSym) const;
		bool			operator!=(Fixed const &rSym) const;
		Fixed&			operator++();
		Fixed			operator++(int);
		Fixed&			operator--();
		Fixed			operator--(int);

		int				getRawBits() const;
		void			setRawBits(int const raw);
		float			toFloat() const;
		int				toInt() const;
		
		static Fixed &			min(Fixed &a, Fixed &b);
		static Fixed const &	min(Fixed const &a, Fixed const &b);
		static Fixed &			max(Fixed &a, Fixed &b);
		static Fixed const &	max(Fixed const &a, Fixed const &b);

	private:
		int					value;
		static const int	bits = 8;
};

std::ostream&	operator<<(std::ostream& o, Fixed const &rSym);

#endif