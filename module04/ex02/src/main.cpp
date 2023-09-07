/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 20:49:03 by babreton          #+#    #+#             */
/*   Updated: 2023/09/02 19:21:37 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AAnimal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"
#include "../include/Brain.hpp"

int	main() {
	Cat		Gattino;
	Dog		Rex;

	std::cout << Gattino.getType() << " " << std::endl;
	std::cout << Rex.getType() << " " << std::endl;

	Rex.makeSound();
	Gattino.think();
	Rex.think();

	return 0;
}
