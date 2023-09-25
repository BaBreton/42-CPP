/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 11:32:41 by babreton          #+#    #+#             */
/*   Updated: 2023/09/26 01:19:23 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

str		trim(const str & str)
{
    size_t first = str.find_first_not_of(' ');
    if (str::npos == first)
    {
        return str;
    }
    size_t last = str.find_last_not_of(' ');
    return str.substr(first, (last - first + 1));
}

void	testInput(std::ifstream & file, int ac, char **av) {
	str	name(av[1]);

	if (ac != 2)
		throw std::runtime_error("Error: Usage: ./btc [data.csv]");
	
	file.open(av[1], std::ifstream::in);
	if (!file.is_open())
		throw std::runtime_error("Error: Could not open file: " + name);
}

int	main(int ac, char **av) {
	std::ifstream		file;
	BitcoinExchange *	exchange;
	
	try {
		testInput(file, ac, av);
		exchange = new BitcoinExchange(file, av);
	}
	catch (const std::exception & e) {
		std::cout << e.what() << std::endl;
		return 1;
	}

	delete exchange;
	return 0;
}