/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:30:40 by babreton          #+#    #+#             */
/*   Updated: 2023/09/21 13:50:08 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SERIALIZER_HPP_
#define _SERIALIZER_HPP_

#include <iostream>
#include <string>
#include <stdint.h>
#include "Data.hpp"

typedef std::string str;

class Data;

class Serializer {
	public:
		static uintptr_t	serialize(Data * ptr);
		static Data *		deserialize(uintptr_t raw);

	private:
		Serializer();
		Serializer(Serializer const &src);
		~Serializer();

		Serializer &	operator=(Serializer const &rSym);
};

#endif