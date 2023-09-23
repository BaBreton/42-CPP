/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 13:46:58 by babreton          #+#    #+#             */
/*   Updated: 2023/09/23 14:40:54 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _EASYFIND_HPP_
#define _EASYFIND_HPP_

#include <iostream>
#include <string>
#include <algorithm>
#include <list>
#include <stdexcept>

typedef std::string str;

class NoValueException : public std::exception {
	public:
		virtual const char *	what() const throw();
};

template<typename T>
int	easyfind(T const & array, int val);

#endif