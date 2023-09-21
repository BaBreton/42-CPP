/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:15:28 by babreton          #+#    #+#             */
/*   Updated: 2023/09/21 14:32:35 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BASE_HPP_
#define _BASE_HPP_

#include <iostream>
#include <string>
#include <stdexcept>
#include <ctime>
#include <cstdlib>

typedef std::string str;

class Base {
	public:
		virtual ~Base();
};

#endif