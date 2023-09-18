/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:40:39 by babreton          #+#    #+#             */
/*   Updated: 2023/09/18 12:40:06 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SHRUBBERYCREATIONFORM_HPP_
#define _SHRUBBERYCREATIONFORM_HPP_

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "AForm.hpp"

typedef std::string str;

class ShrubberyCreationForm : public AForm {
	public:
		ShrubberyCreationForm(Bureaucrat & target);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		~ShrubberyCreationForm();

		ShrubberyCreationForm &	operator=(ShrubberyCreationForm const &rSym);

		void	beSigned(Bureaucrat & person);
		void	execute(Bureaucrat & executor) const;
	private:
		Bureaucrat &	_target;
};

std::ostream &	operator<<(std::ostream & o, ShrubberyCreationForm const &rSym);

#endif