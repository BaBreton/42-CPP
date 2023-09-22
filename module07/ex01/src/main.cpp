/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:32:54 by babreton          #+#    #+#             */
/*   Updated: 2023/09/22 11:42:24 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/iter.hpp"

template<typename T>
void	iter(T *adress, int lenght, void (*fct)(T& var)) {
	for (int i = 0; i < lenght; i++)
		fct(adress[i]);
}

template<typename T>
void	printValue(T &val) {
	std::cout << val;
}

int	main() {
	char	array[] = {'a', 'b', 'c', 'd'};

	iter(array, 4, printValue<char>);
}