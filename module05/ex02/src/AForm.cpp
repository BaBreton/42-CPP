/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:56:51 by babreton          #+#    #+#             */
/*   Updated: 2023/09/18 11:27:31 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

AForm::AForm(str name, int signGrade, int executeGrade) : _name(name), _signed(false), _signGrade(signGrade), _executeGrade(executeGrade) {
	std::cout << "[C] AForm base constructor called." << std::endl;
}

AForm::AForm() : _name(NULL), _signed(false), _signGrade(150), _executeGrade(150) {
	std::cout << "[C] AForm default constructor called." << std::endl;
}

AForm::AForm(AForm const &src) : _name(src.getName()), _signGrade(src.getSignGrade()), _executeGrade(src.getExecuteGrade()) {
	std::cout << "[C] AForm copy constructor called." << std::endl;
	*this = src;
}

AForm::~AForm() {
	std::cout << "[D] AForm default destructor called." << std::endl;
}

AForm &	AForm::operator=(AForm const &rSym) {
	if (this != &rSym) {
		this->_signed = rSym.getSigned();
	}
	return *this;
}

std::ostream &	operator<<(std::ostream & o, AForm const &rSym) {
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

str		AForm::getName() const {
	return this->_name;
}

bool	AForm::getSigned() const {
	return this->_signed;
}

int		AForm::getSignGrade() const {
	return this->_signGrade;
}

int		AForm::getExecuteGrade() const {
	return this->_executeGrade;
}

/* -------------------------------------------------------------------------- */
/*                              Members functions                             */
/* -------------------------------------------------------------------------- */

void	AForm::beSigned(Bureaucrat & person) {
	if (this->_signed) {
		std::cout << this->_name << " is already signed." << std::endl; 
		return;
	}
	if (person.getGrade() > this->_signGrade) {
		person.signForm(this->_name, this->_signed);
		throw AForm::GradeTooLowException();
	}
	else {
		this->_signed = true;
		person.signForm(this->_name, this->_signed);
	}
}

const char *	AForm::GradeTooHighException::what() const throw() {
	return ("The bureaucrat is too senior to do this.");
}

const char *	AForm::GradeTooLowException::what() const throw() {
	return ("The bureaucrat don't have the ability to do this.");
}
