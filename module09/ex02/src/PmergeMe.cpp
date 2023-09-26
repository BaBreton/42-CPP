/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:22:03 by babreton          #+#    #+#             */
/*   Updated: 2023/09/26 16:39:17 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

PmergeMe::PmergeMe(std::vector<int> & input, int size) : _vector(input), _deque(input.begin(), input.end()), _size(size) {
	this->_vecSort();
	this->_listSort();
}

PmergeMe::PmergeMe(PmergeMe const &src) : _size(src._size) {
	this->_vector = src._vector;
	this->_deque = src._deque;
	*this = src;
}

PmergeMe::~PmergeMe() {
}

PmergeMe &	PmergeMe::operator=(PmergeMe const &rSym) {
	if (this != &rSym) {
		this->_vector = rSym._vector;
		this->_deque = rSym._deque;
	}
	return *this;
}

/* -------------------------------------------------------------------------- */
/*                              Members functions                             */
/* -------------------------------------------------------------------------- */

void	PmergeMe::_vecSort() {
	clock_t start = clock();
	
	size_t const				half_size = this->_vector.size() / 2;
	std::vector<int>			split_lo(this->_vector.begin(), this->_vector.begin() + half_size);
	std::vector<int>			split_hi(this->_vector.begin() + half_size, this->_vector.end());

	std::vector<int>::iterator	it;
	std::vector<int>::iterator	ite;

	std::sort(split_lo.begin(), split_lo.end());
	std::sort(split_hi.begin(), split_hi.end());

	split_lo.insert(split_lo.end(), split_hi.begin(), split_hi.end());

	std::sort(split_lo.begin(), split_lo.end());
	
	std::cout << "After: ";
	for (it = split_lo.begin(), ite = split_lo.end(); it != ite; it++)
		std::cout << " " << *it;
	std::cout << std::endl;

	clock_t end = clock();
    double duration = (double)(end - start) / CLOCKS_PER_SEC * 1000000;
    std::cout << "Time to process a range of " << this->_size << " elements with std::vector<int> : " << duration << " us" << std::endl;
}

void	PmergeMe::_listSort() {
	clock_t start = clock();
	
	std::deque<int>::iterator	it = this->_deque.begin();
	std::deque<int>::iterator	ite = this->_deque.end();

	size_t const				half_size = this->_deque.size() / 2;
	std::deque<int>				split_lo;
	std::deque<int>				split_hi;

	for (size_t i = 0; i < half_size; i++) {
		split_lo.push_back(*it);
		it++;
	}
	for (; it != ite; it++)
		split_hi.push_back(*it);

	std::sort(split_lo.begin(), split_lo.end());
	std::sort(split_hi.begin(), split_hi.end());

	split_lo.insert(split_lo.end(), split_hi.begin(), split_hi.end());

	std::sort(split_lo.begin(), split_lo.end());

	clock_t end = clock();
    double duration = (double)(end - start) / CLOCKS_PER_SEC * 1000000;
    std::cout << "Time to process a range of " << this->_size << " elements with std::deque<int> : " << duration << " us" << std::endl;
}