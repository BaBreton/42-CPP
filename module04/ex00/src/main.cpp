/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 20:49:03 by babreton          #+#    #+#             */
/*   Updated: 2023/09/18 09:49:52 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"

int	main() {
	WrongAnimal	*unknown = new WrongAnimal();
	Dog		*dog = new Dog();

	std::cout << unknown->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;

	unknown->makeSound();
	dog->makeSound();
	delete unknown;

	unknown = new WrongCat();
	unknown->makeSound();
	delete dog;
	delete unknown;
}