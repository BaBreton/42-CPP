/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:50:41 by babreton          #+#    #+#             */
/*   Updated: 2023/09/18 12:24:49 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PresidentialPardonForm.hpp"
#include "../include/AForm.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

PresidentialPardonForm::PresidentialPardonForm(Bureaucrat & target) : AForm::AForm("Presidential Pardon", 25, 5), _target(target) {
	std::cout << "[C] PresidentialPardonForm default constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : AForm::AForm(src), _target(src._target) {
	std::cout << "[C] PresidentialPardonForm copy constructor called." << std::endl;
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "[D] PresidentialPardonForm default destructor called." << std::endl;
}

PresidentialPardonForm &	PresidentialPardonForm::operator=(PresidentialPardonForm const &rSym) {
	if (this != &rSym) {
		this->_target = rSym._target;
	}
	return *this;
}

std::ostream &	operator<<(std::ostream & o, PresidentialPardonForm const &rSym) {
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

void	PresidentialPardonForm::execute(Bureaucrat & executor) const {
	executor.executeForm(*this);
	if (this->_signed == true)
		std::cout << this->_target.getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	else
		std::cout << this->_name << " is not signed, can't execute." << std::endl;
}