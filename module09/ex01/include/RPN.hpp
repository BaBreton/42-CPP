/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 23:59:47 by babreton          #+#    #+#             */
/*   Updated: 2023/09/26 00:39:07 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _RPN_HPP_
#define _RPN_HPP_

#include <iostream>
#include <string>
#include <stack>
#include <cctype>
#include <cstdlib>

#define SIGN(c) ((c) == '*' || (c) == '/' || (c) == '+' || (c) == '-')

typedef std::string str;

class RPN {
	public:
		RPN();
		RPN(char *input);
		RPN(RPN const &src);
		~RPN();

		RPN &	operator=(RPN const &rSym);
	private:
		std::stack<int>	_stack;
};

#endif