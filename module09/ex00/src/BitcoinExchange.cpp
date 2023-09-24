/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 13:02:46 by babreton          #+#    #+#             */
/*   Updated: 2023/09/24 16:33:58 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange (std::ifstream & file) {
	std::ifstream	data;

	data.open("data.csv", std::ifstream::in);
	this->_parseFile(data, this->_map, ',');
	this->_parseFile(file, this->_input, '|');
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &src) {
	this->_map = src._map;
}

BitcoinExchange::~BitcoinExchange() {
	std::cout << "[D] BitcoinExchange default destructor called." << std::endl;
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

void	BitcoinExchange::printMap(int option) const {
	std::map<str, float>::const_iterator	it;
	std::map<str, float>::const_iterator	ite;;
	
	switch (option) {
		case 2: {
			ite = this->_map.end();
			for (it = this->_map.begin(); it != ite; it++) {
				std::cout << "\'" << it->first << "\' : \'" << std::fixed << std::setprecision(2) << "\'" << it->second << "\'" << std::endl;
			}
			break;
		}
		case 1: {
			ite = this->_input.end();
			for (it = this->_input.begin(); it != ite; it++) {
				std::cout << it->first << " : " << std::fixed << std::setprecision(2) << it->second << std::endl;
			}
		}
		break;
	}

}

void	BitcoinExchange::_parseFile(std::ifstream & file, std::map<str, float> & map, char delimiter) {
	str				line;
	str				key;
	str				field;
	float			value;
	int				i = 0;
	
	while (getline(file, line)) {
		if (delimiter == '|' && line.find('|') == str::npos) {
			std::cout << "Error: bad input: " + line << std::endl;
			continue;
		}
		
		std::istringstream	s(line);
		while (getline(s, field, delimiter)) {
			if (i == 1)
				key = ::trim(field);
			if (i == 2) {
				value = atof(::trim(field).c_str());
				if (delimiter == '|' && value < 0) {
					std::cout << "Error: not a positive number." << std::endl;
					continue;
				}
				else if (delimiter == '|' && value >= __INT_MAX__) {
					std::cout << "Error: too large number." << std::endl;
					continue;
				}
				else if (delimiter == '|')
					this->_printLine(key, value);
				else
					map.insert(std::pair<str, float>(key, value));
			}
			i++;
		}
		i = 1;
	}
	file.close();
}

void	BitcoinExchange::_printLine(str key, float value) const {
	std::map<str, float>::const_iterator	it;
	std::map<str, float>::const_iterator	ite = this->_map.end();
	str										new_key;
	int										found = 0;

	for (it = this->_map.begin(); it != ite && found == 0; it++) {
		if (!key.compare(it->first))
			found = 1;
	}
	if (it == ite)
		new_key = _getNearestDate(key);
	
	std::cout << key << std::endl;

	(void) value;
}

str &	BitcoinExchange::_getNearestDate(str & key) const {
	std::map<str, float>::const_iterator	it;
	std::map<str, float>::const_iterator	ite = this->_map.end();
	int										digit = atoi(key.c_str() + 8);
	int	found = 0;

	if (digit <= 9) {
		while (digit > 0) {
			key.erase(8, 2);
			key = SSTR(key << digit);
			if (!key.compare(it->first))
				return key;
			digit--;
		}
		while (digit < 32) {
			if (digit < 10)
				key.erase(8,2);
			else
				key.erase(9,1);
			key = SSTR(key << digit);
			if (!key.compare(it->first))
				return key;
			digit++;
		}
	}
	else if (digit > 9) {
		while (digit < 32) {
			key.erase(9,1);
			key = SSTR(key << digit);
			if (!key.compare(it->first))
				return key;
			digit++;
		}
	}

	return key;
}