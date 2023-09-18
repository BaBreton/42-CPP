/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:47:26 by babreton          #+#    #+#             */
/*   Updated: 2023/09/18 14:35:49 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RobotomyRequestForm.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

RobotomyRequestForm::RobotomyRequestForm(Bureaucrat & target) : AForm("Robocop", 72, 45), _target(target) {
	std::cout << "[C] RobotomyRequestForm default constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm::AForm(src), _target(src._target) {
	std::cout << "[C] RobotomyRequestForm copy constructor called." << std::endl;
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "[D] RobotomyRequestForm default destructor called." << std::endl;
}

RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const &rSym) {
	if (this != &rSym) {
		this->_target = rSym._target;
	}
	return *this;
}

std::ostream &	operator<<(std::ostream & o, RobotomyRequestForm const &rSym) {
	o << "Form name : " << rSym.getName() << std::endl;
	o << "Signed : ";
	if (rSym.getSigned())
		o << "True" << std::endl;
	else
		o << "False" << std::endl;
	o << "Need to be grade " << rSym.getSignGrade() << " to sign it, and grade " << rSym.getExecuteGrade() << " to execute it.";
	return o;
}

/* -------------------------------------------------------------------------- */
/*                              Geteurs & seteurs                             */
/* -------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------- */
/*                              Members functions                             */
/* -------------------------------------------------------------------------- */

void	RobotomyRequestForm::execute(Bureaucrat & executor) const {
	executor.executeForm(*this);
	if (this->_signed == true) {
		std::cout << "*Some drilling noise*" << std::endl;
		sleep(1);
		std::cout << "*Some drilling noise*" << std::endl;
		sleep(1);
		std::cout << "*Some drilling noise*" << std::endl;
		sleep(1);
		srand(time(NULL));
		int	nb = rand() % 100 + 1;
		if (nb % 2 == 0)
			std::cout << this->_target.getName() << " has been robotomized." << std::endl;
		else
			std::cout << this->_target.getName() << " was not robotomized." << std::endl;
	}
}