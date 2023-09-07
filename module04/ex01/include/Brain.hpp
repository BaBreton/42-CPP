/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 13:50:52 by babreton          #+#    #+#             */
/*   Updated: 2023/09/02 19:11:36 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <ctime>
#include <unistd.h>

typedef std::string str;

class Brain {
	public:
		Brain();
		Brain(Brain const &src);
		~Brain();

		Brain &	operator=(Brain const &rSym);

		str		getRandomIdea() const;
	private:
		str		ideaGenerator() const;
		
		str		_ideas[100];
};