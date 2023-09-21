/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:33:41 by babreton          #+#    #+#             */
/*   Updated: 2023/09/21 13:35:21 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DATA_HPP_
#define _DATA_HPP_

#include <iostream>
#include <string>

typedef std::string str;

class Data {
	public:
		Data();
		Data(Data const &src);
		~Data();

		Data &	operator=(Data const &rSym);
		int		getSize() const;
	private:
		int	_size;
};

std::ostream &	operator<<(std::ostream & o, Data const &rSym);

#endif