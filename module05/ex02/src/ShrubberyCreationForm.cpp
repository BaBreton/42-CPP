/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:50:41 by babreton          #+#    #+#             */
/*   Updated: 2023/09/18 12:53:05 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ShrubberyCreationForm.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

ShrubberyCreationForm::ShrubberyCreationForm(Bureaucrat & target) : AForm::AForm("Money Tree", 145, 137), _target(target) {
	std::cout << "[C] ShrubberyCreationForm default constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm::AForm(src), _target(src._target) {
	std::cout << "[C] ShrubberyCreationForm copy constructor called." << std::endl;
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "[D] ShrubberyCreationForm default destructor called." << std::endl;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rSym) {
	if (this != &rSym) {
		this->_target = rSym._target;
	}
	return *this;
}

std::ostream &	operator<<(std::ostream & o, ShrubberyCreationForm const &rSym) {
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

void	ShrubberyCreationForm::execute(Bureaucrat & executor) const {
	str				outfile = this->_target.getName() + "_shrubbery";
	std::ofstream	output(outfile.c_str());
	
	executor.executeForm(*this);
	if (this->_signed == true) {
		output << "       _-_" << std::endl;
		output << "    /~~   ~~\\" << std::endl;
		output << " /~~         ~~\\" << std::endl;
		output << "{               }" << std::endl;
		output << " \\  _-     -_  /" << std::endl;
		output << "   ~  \\ //  ~" << std::endl;
		output << "_- -   | | _- _" << std::endl;
		output << "  _ -  | |   -_" << std::endl;
		output << "      // \\\\" << std::endl;
	}
	else
		std::cout << this->_name << " is not signed, can't execute." << std::endl;
}