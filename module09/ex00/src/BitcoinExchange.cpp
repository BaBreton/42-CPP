/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 13:02:46 by babreton          #+#    #+#             */
/*   Updated: 2023/09/25 18:16:31 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange (std::ifstream & file, char ** av) {
	std::ifstream	data;

	data.open("data.csv", std::ifstream::in);
	this->_parseData(data);

	this->_inputSize = this->_getInputSize(file) - 1;
	this->_input = new int[this->_inputSize];
	for (int i = 0; i < this->_inputSize; i++)
		this->_input[i] = 0;

	file.open(av[1], std::ifstream::in);
	this->_parseInput(file);

	file.open(av[1], std::ifstream::in);
	this->_output(file);
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &src) {
	this->_map = src._map;
}

BitcoinExchange::~BitcoinExchange() {
	delete [] this->_input;
}

BitcoinExchange &	BitcoinExchange::operator=(BitcoinExchange const &rSym) {
	if (this != &rSym) {

	}
	return *this;
}

/* -------------------------------------------------------------------------- */
/*                              Geteurs & seteurs                             */
/* -------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------- */
/*                              Members functions                             */
/* -------------------------------------------------------------------------- */

void	BitcoinExchange::printMap() const {
	std::map<str, float>::const_iterator	it;
	std::map<str, float>::const_iterator	ite = this->_map.end();

	for (it = this->_map.begin(); it != ite; it++) {
		std::cout << "\'" << it->first << "\' : \'" << std::fixed << std::setprecision(2) << it->second << "\'" << std::endl; }
}

int		BitcoinExchange::_getInputSize(std::ifstream & file) const {
	int	i = 0;
	str	line;

	while (getline(file, line))
		i++;
	
	file.close();
	return i;
}

void	BitcoinExchange::_parseData(std::ifstream & file) {
	str				line;
	str				key;
	str				field;
	str				value;
	float			f;
	int				i = 0;
	
	while (getline(file, line)) {
		std::istringstream	s(line);
		while (getline(s, field, ',')) {
			if (i == 1)
				key = field;
			if (i == 2) {
				value = field;
				f = atof(field.c_str());
				this->_map.insert(std::pair<str, float>(key, f));
			}
			i++;
		}
		i = 1;
	}
	file.close();
}

void	BitcoinExchange::_parseInput(std::ifstream & file) {
	str	line;
	int	i = 0;
	
	getline(file, line);
	while(getline(file, line)) {
		this->_input[i] = 0;
		if (this->_checkPositive(line) == false)
			this->_input[i] = 1;
		if (this->_checkDate(line) == false && line.length() < 11)
			this->_input[i] = 2;
		if (this->_checkTooLarge(line) == false)
			this->_input[i] = 3;
		i++;
	}
	file.close();
}

bool	BitcoinExchange::_checkDate(str line) {
	std::istringstream	s(line);
	str					date;
	char				year[4];
	char				mounth[2];
	char				day[2];

	getline(s, date, '|');
	date = ::trim(date);

	year[date.copy(year, 4, 0)] = '\0';
	mounth[date.copy(mounth, 2, 5)] = '\0';
	day[date.copy(day, 2, 8)] = '\0';

	if (atoi(year) > 2023)
		return false;
	if (atoi(mounth) > 12)
		return false;
	if (atoi(day) > 31)
		return false;
	
	return true;
}

bool	BitcoinExchange::_checkPositive(str line) {
	std::istringstream	s(line);
	str					value;
	size_t				found;
	float				f;

	getline(s, value, '|');
	getline(s, value, '|');

	found = value.find("-");
	found = value.find("-", found + 1);
	if (found == str::npos) {
		f = atof(value.c_str());
		if (f > 0)
			return true;
		else
			return false;
	}
	return false;
}

bool	BitcoinExchange::_checkTooLarge(str line) {
	std::istringstream	s(line);
	str					value;
	float				f;

	getline(s, value, '|');
	getline(s, value, '|');

	f = atof(value.c_str());
	if (f >= __INT_MAX__)
		return false;
	return true;
}

void	BitcoinExchange::_output(std::ifstream & file) {
	str					line;
	str					key;
	str					value;
	int					i = 0;

	getline(file, line);
	while (i < this->_inputSize) {
		getline(file, line);

		std::istringstream	s(line);
		getline(s, key, '|'); key = ::trim(key);
		getline(s, value, '|'); value = ::trim(value);

		if (this->_input[i] == 0) {
			if (this->_map[key] == 0)
				key = this->_nearestDate(key);
			std::cout << key << " => " << value << " = " << atof(value.c_str()) * this->_map[key] << std::endl;
		}
		else if (this->_input[i] == 1)
			std::cout << "Error: not a positive number." << std::endl;
		else if (this->_input[i] == 2)
			std::cout << "Error: bad input => " << key << std::endl;
		else if (this->_input[i] == 3)
			std::cout << "Error: too large a number." << std::endl;

		key.clear();
		value.clear();
		i++;
	}
}

str		BitcoinExchange::_nearestDate(str key) {
	str	line;
	int	year;
	int	mounth;
	int day;
}