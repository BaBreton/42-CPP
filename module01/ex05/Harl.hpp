/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 09:47:11 by babreton          #+#    #+#             */
/*   Updated: 2023/08/16 09:52:36 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

typedef std::string str;

class Harl {
	public:
		Harl();
		~Harl();

		void	complain(str level);

	private:
		void	debug() const;
		void	info() const;
		void	warning() const;
		void	error() const;
};

#endif