/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:56:51 by babreton          #+#    #+#             */
/*   Updated: 2023/09/16 19:35:33 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

Form::Form(str name, int signGrade) : _name(name), _signed(false), _signGrade(signGrade), _executeGrade(signGrade - 1) {
	std::cout << "[C] Form base constructor called." << std::endl;
}

Form::Form() : _name(NULL), _signed(false), _signGrade(150), _executeGrade(150) {
	std::cout << "[C] Form default constructor called." << std::endl;
}

Form::Form(Form const &src) : _name(src.getName()), _signGrade(src.getSignGrade()), _executeGrade(src.getExecuteGrade()) {
	std::cout << "[C] Form copy constructor called." << std::endl;
	*this = src;
}

Form::~Form() {
	std::cout << "[D] Form default destructor called." << std::endl;
}

Form &	Form::operator=(Form const &rSym) {
	if (this != &rSym) {
		this->_signed = rSym.getSigned();
	}
	return *this;
}

/* -------------------------------------------------------------------------- */
/*                              Geteurs & seteurs                             */
/* -------------------------------------------------------------------------- */

str		Form::getName() const {
	return this->_name;
}

bool	Form::getSigned() const {
	return this->_signed;
}

int		Form::getSignGrade() const {
	return this->_signGrade;
}

int		Form::getExecuteGrade() const {
	return this->_executeGrade;
}

/* -------------------------------------------------------------------------- */
/*                              Members functions                             */
/* -------------------------------------------------------------------------- */

const char *	Form::GradeTooHighException::what() const throw() {
	return ("The bureaucrat is too senior to do this.");
}

const char *	Form::GradeTooHighException::what() const throw() {
	return ("the bureaucrat don't have the ability to do this.");
}