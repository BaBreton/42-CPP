/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:25:31 by babreton          #+#    #+#             */
/*   Updated: 2023/09/22 11:35:59 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ITER_HPP_
#define _ITER_HPP_

#include <iostream>
#include <string>

typedef std::string str;

template<typename T>
void	iter(T *adress, int lenght, void (*fct)(T& var));

template<typename T>
void	printValue(T val);

#endif