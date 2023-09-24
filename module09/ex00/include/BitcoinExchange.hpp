/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:23:27 by babreton          #+#    #+#             */
/*   Updated: 2023/09/24 16:12:43 by babreton         ###   ########.fr       */
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

#define SSTR( x ) static_cast< std::ostringstream & >( \
        ( std::ostringstream() << std::dec << x ) ).str()

class BitcoinExchange {
	public:
		BitcoinExchange();
		BitcoinExchange(std::ifstream & file);
		BitcoinExchange(BitcoinExchange const &src);
		~BitcoinExchange();

		BitcoinExchange &	operator=(BitcoinExchange const &rSym);

		void		printMap(int option) const;

	private:
		std::map<str, float>	_input;
		std::map<str, float>	_map;

		void				_parseFile(std::ifstream & file, std::map<str, float> & map, char delimiter);
		void				_printLine(str key, float value) const ;
		str &				_getNearestDate(str & key) const;
};

str		trim(const str & str);

#endif