/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 14:50:11 by babreton          #+#    #+#             */
/*   Updated: 2023/09/24 01:29:31 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

Span::Span() : _maxSize(0), _size(0) {}

Span::Span(unsigned int N) : _maxSize(N), _size(0) {}

Span::Span(Span const &src) {
	this->_array = src._array;
	this->_maxSize = src._maxSize;
	this->_size = src._size;
}

Span::~Span() {
}

Span &	Span::operator=(Span const &rSym) {
	if (this != &rSym) {
		this->_array = rSym._array;
		this->_maxSize = rSym._maxSize;
		this->_size = rSym._size;
	}
	return *this;
}

/* -------------------------------------------------------------------------- */
/*                              Members functions                             */
/* -------------------------------------------------------------------------- */

void				Span::addNumber(int n) {
	if (this->_size == this->_maxSize)
		throw Span::MaxNumbersException();
	this->_array.push_back(n);
	this->_size++;
}

void				Span::bigAdd(int n) {
	if (this->_size + n > this->_maxSize) {
		std::cout << "Can't add " << n << " elements to the array, the max_size will be reached." << std::endl; return;
	}
	
	int nb = 0;
	
	for (int i = 0; i < n; i++) {
		nb = rand() % 100 + 1;
		this->addNumber(nb);
		std::cout << this->_size << " / " << this->_maxSize << " : " << nb << std::endl;
	}
}

int					Span::shortestSpan() {
	std::vector<int>	array(this->_array);
	
	if (!array.size())
		throw Span::NoNumberException();
	if (array.size() == 1)
		throw Span::OneNumberException();

	

	int									min = __INT_MAX__;
	std::vector<int>::iterator	it;
	std::vector<int>::iterator	ite = 	array.end();
	
	std::sort(array.begin(), array.end());
	
	for (it = array.begin(); it != --ite; it++) {
		if ((*(it + 1) - *it) < min) {
			min = (*(it + 1) - *it);
		}
	}
	return min;
}

// int		Span::shortestSpan()
// {
// 	std::vector<int>	vec(this->_array);
// 	int					t = 2147483647;

// 	sort(vec.begin(), vec.end());
// 	for (unsigned int i = 0; i + 1 !=  vec.size(); i++)
// 	{
// 		if (abs(vec[i] - vec[i + 1]) < t)
// 			t = abs(vec[i] - vec[i + 1]);
// 	}
// 	return (t);
// }

int					Span::longestSpan() const {
	if (!this->_array.size())
		throw Span::NoNumberException();
	if (this->_array.size() == 1)
		throw Span::OneNumberException();
		
	int	max = *std::max_element(this->_array.begin(), this->_array.end());
	int	min = *std::min_element(this->_array.begin(), this->_array.end());

	return max - min;
}

const char *		Span::MaxNumbersException::what() const throw() {
	return "Can't add a new number to the array: max size reached";
}

const char *	Span::NoNumberException::what() const throw() {
	return "The requested range cannot be found: array is empty.";
}

const char *	Span::OneNumberException::what() const throw() {
	return "The requested range cannot be found: array contain only one number.";
}
