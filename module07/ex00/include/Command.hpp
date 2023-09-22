/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Command.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:03:23 by babreton          #+#    #+#             */
/*   Updated: 2023/09/22 11:21:18 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _COMMAND_HPP_
#define _COMMAND_HPP_

#include <iostream>
#include <string>

typedef std::string str;

template<typename T>
void	swap(T &a, T &b);

template<typename T>
T	min(T a, T b);

template<typename T>
T	max(T a, T b);

#endif

