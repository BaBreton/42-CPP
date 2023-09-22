/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:37:44 by babreton          #+#    #+#             */
/*   Updated: 2023/09/22 13:13:37 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ARRAY_HPP_
#define _ARRAY_HPP_

#include <iostream>
#include <string>
#include <cstdlib>
#include <stdexcept>

typedef std::string str;

template<typename T>
class Array {
	public:
		Array();
		Array(unsigned int n);
		Array(Array const &ref);
		~Array();

		Array &	operator=(Array const &ref);
		T		operator[](int n) const;
		T &		operator[](int n);
		int		size() const;
		
		class OutOfBoundException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
	private:
		T *	_array;
		int	_size;
};

#endif