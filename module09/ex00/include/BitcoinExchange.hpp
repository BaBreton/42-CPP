/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:23:27 by babreton          #+#    #+#             */
/*   Updated: 2023/09/27 14:16:43 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BITCOINEXCHANGE_HPP_
#define _BITCOINEXCHANGE_HPP_

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <fstream>
#include <map>
#include <cstdlib>

typedef std::string str;

template <typename T>
std::string itos(T nb) {
	std::ostringstream	ss;
	ss << nb;
	return ss.str();
}

#define SSTR( x ) static_cast< std::ostringstream & >( \
        ( std::ostringstream() << std::dec << x ) ).str()

class BitcoinExchange {
	public:
		BitcoinExchange();
		BitcoinExchange(std::ifstream & file, char ** av);
		BitcoinExchange(BitcoinExchange const &src);
		~BitcoinExchange();

		BitcoinExchange &	operator=(BitcoinExchange const &rSym);

		void		printMap() const;

	private:
		std::map<str, float>	_map;
		int						_inputSize;
		int *					_input;
		str const				_inputPath;

		int		_getInputSize(std::ifstream & file) const;
		void	_parseData(std::ifstream & file);
		void	_parseInput(std::ifstream & file);
		bool	_checkDate(str line);
		bool	_checkPositive(str line);
		bool	_checkTooLarge(str line);
		void	_output(std::ifstream & file);
		void	_nearestDate(str & key);
};

str 		trim(const str & str);

#endif