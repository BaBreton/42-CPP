/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:46:44 by babreton          #+#    #+#             */
/*   Updated: 2023/09/18 14:23:25 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ROBOTOMYREQUESTFORM_HPP_
#define _ROBOTOMYREQUESTFORM_HPP_

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <unistd.h>
#include "AForm.hpp"

typedef std::string str;

class RobotomyRequestForm : public AForm {
	public:
		RobotomyRequestForm(Bureaucrat & target);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		~RobotomyRequestForm();

		RobotomyRequestForm &	operator=(RobotomyRequestForm const &rSym);

		void	beSigned(Bureaucrat & person);
		void	execute(Bureaucrat & executor) const;
	private:
		Bureaucrat &	_target;
};

std::ostream &	operator<<(std::ostream & o, RobotomyRequestForm const &rSym);

#endif