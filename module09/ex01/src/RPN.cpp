/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 00:01:11 by babreton          #+#    #+#             */
/*   Updated: 2023/09/27 14:40:51 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

RPN::RPN () {
}

RPN::RPN(char * input) {
	int		first;
	int		second;
	int		result;
	
	int		digit = 0;
	int		sign = 0;

	for (int i = 0; input[i] != '\0'; i++) {
		if (input[i] == ' ')
			i++;
		if (isdigit(input[i]))
			digit++;
		else if ((input[i]) == '*' || (input[i]) == '/' || (input[i]) == '+' || (input[i]) == '-')
			sign++;
	}

	if (sign != digit - 1)
		throw std::runtime_error("Error syntax: You must have one digit more than signs.");

	for (int i = 0; input[i] != '\0'; i++) {
		if (input[i] == ' ')
			i++;
		if (isdigit(input[i])) {
			this->_stack.push(input[i] - '0');
		}
		else if ((input[i]) == '*' || (input[i]) == '/' || (input[i]) == '+' || (input[i]) == '-') {
			second = this->_stack.top();
			this->_stack.pop();
			first = this->_stack.top();
			this->_stack.pop();
			switch (input[i]) {
			case '*':
				result = first * second;
				break;
			case '/':
				result = first / second;
				break;
			case '+':
				result = first + second;
				break;
			case '-':
				result = first - second;
			default:
				break;
			}
			this->_stack.push(result);
		}
		else {
			std::cout << "Error." << std::endl; return;
		}
	}
	std::cout << result << std::endl;
}

RPN::RPN(RPN const &src) {
	this->_stack = src._stack;
	*this = src;
}

RPN::~RPN() {
}

RPN &	RPN::operator=(RPN const &rSym) {
	if (this != &rSym) {
		this->_stack = rSym._stack;
	}
	return *this;
}
