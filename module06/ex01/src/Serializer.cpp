/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:38:34 by babreton          #+#    #+#             */
/*   Updated: 2023/09/21 13:41:21 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Serializer.hpp"

/* -------------------------------------------------------------------------- */
/*                              Members functions                             */
/* -------------------------------------------------------------------------- */

uintptr_t	Serializer::serialize(Data * ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *		Serializer::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}