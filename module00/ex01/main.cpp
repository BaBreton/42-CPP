/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 11:55:29 by babreton          #+#    #+#             */
/*   Updated: 2023/08/13 18:05:07 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "repertory.hpp"


int	main() {
	PhoneBook	PhoneBook;

	str			line;
	str			add = "ADD";
	str			search = "SEARCH";
	str			exit = "EXIT";
	
	system("clear");
	std::cout << "Hello ! Welcome to your new contact manager." << std::endl;
	while (1)
	{
		std::cout << "Type ADD, SEARCH or EXIT : ";
		std::getline(std::cin, line);
		if (!line.compare(add))
			PhoneBook.add_contact();
		else if (!line.compare(search))
			PhoneBook.search_contact();
		else if (!line.compare(exit))
		{
			std::cout << "Goodbye !" << std::endl;
			break;
		}
		system("clear");
	}
	sleep(1);
	return 0;
}
