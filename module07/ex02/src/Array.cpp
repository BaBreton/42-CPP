/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:44:32 by babreton          #+#    #+#             */
/*   Updated: 2023/09/22 13:14:24 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Array.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

template<typename T>
Array<T>::Array() : _array(new T[0]), _size(0) {}

template<typename T>
Array<T>::Array(unsigned int n) {
	this->_array = new T[n];
	for (unsigned int i = 0; i < n; i++)
		this->_array[n] = 0;
	this->_size = n;
}

template<typename T>
Array<T>::Array(Array const &src) {
	*this = src;
}

template<typename T>
Array<T>::~Array() {
	delete [] this->_array;
}

template<typename T>
Array<T> &	Array<T>::operator=(Array<T> const &rSym) {
	if (this != &rSym) {
		delete [] this->_array;
		this->_array = new T[rSym._size];
		this->_size = rSym._size;
		for (int i = 0; i < rSym._size; i++)
			this->_array[i] = rSym._array[i];
	}
	return *this;
}

template<typename T>
T		Array<T>::operator[](int n) const {
	T	instance;

	if (n > this->_size - 1)
		throw Array::OutOfBoundException();
	instance = this->_array[n];
	return instance;
}

template<typename T>
T &		Array<T>::operator[](int n) {
	if (n > this->_size - 1)
		throw Array::OutOfBoundException();
	return this->_array[n];
}

template <class T>
const char* Array<T>::OutOfBoundException::what() const throw()
{
	return ("Value is out of bound.");
}

/* -------------------------------------------------------------------------- */
/*                              Geteurs & seteurs                             */
/* -------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------- */
/*                              Members functions                             */
/* -------------------------------------------------------------------------- */

template<typename T>
int		Array<T>::size() const {
	return this->_size;
}
