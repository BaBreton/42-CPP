/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:18:14 by babreton          #+#    #+#             */
/*   Updated: 2023/09/18 11:58:47 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

Bureaucrat::Bureaucrat(str name, int grade) : _name(name) {
	std::cout << "[C] Bureaucrat base constructor called." << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat() {
	std::cout << "[C] Bureaucrat default constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src.getName()) {
	std::cout << "[C] Bureaucrat copy constructor called." << std::endl;
	*this = src;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "[D] Bureaucrat default destructor called." << std::endl;
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const &rSym) {
	if (this != &rSym) {
		this->_grade = rSym._grade;
	}
	return *this;
}

std::ostream &	operator<<(std::ostream & o, Bureaucrat const &rSym) {
	o << rSym.getName() << ", bureaucrat grade : " << rSym.getGrade();
	return o;
}

/* -------------------------------------------------------------------------- */
/*                              Geteurs & seteurs                             */
/* -------------------------------------------------------------------------- */

str	Bureaucrat::getName() const {
	return this->_name;
}

int	Bureaucrat::getGrade() const {
	return this->_grade;
}

/* -------------------------------------------------------------------------- */
/*                              Members functions                             */
/* -------------------------------------------------------------------------- */

void			Bureaucrat::promote() {
	if (this->_grade > 1)
		this->_grade--;
	else
		throw Bureaucrat::GradeTooHighException();
}

void			Bureaucrat::demote() {
	if (this->_grade < 150)
		this->_grade++;
	else
		throw Bureaucrat::GradeTooLowException();
}

void			Bureaucrat::signForm(str name, bool sign) {
	if (sign)
		std::cout << this->_name << " signed " << name << "." << std::endl;
	else
		std::cout << this->_name << " couldn't sign " << name << " because he don't have the ability to do this." << std::endl;
}

void			Bureaucrat::executeForm(AForm const & form) {
	if (this->_grade > form.getExecuteGrade()) {
		std::cout << this->_name << " can't execute " << form.getName() << "." << std::endl;
		throw AForm::GradeTooLowException();
	}
	std::cout << this->_name << " executed " << form.getName() << "." << std::endl;
}

const char *	Bureaucrat::GradeTooHighException::what() const throw() {
	return ("A bureaucrat can't have a grade greater than 1.");
}

const char *	Bureaucrat::GradeTooLowException::what() const throw() {
	return ("A bureaucrat can't have a grade lower than 150.");
}