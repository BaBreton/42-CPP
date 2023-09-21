/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 09:39:53 by babreton          #+#    #+#             */
/*   Updated: 2023/09/21 12:05:33 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCALARCONVERTER_HPP_
#define _SCALARCONVERTER_HPP_

#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <limits.h>
#include <float.h>
#include <cstdlib>

class ScalarConverter {
	public:
		static void	convert(std::string param);

	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter const &src);
		~ScalarConverter();
		
		ScalarConverter &	operator=(ScalarConverter const &rSym);

};

#endif