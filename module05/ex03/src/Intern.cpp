/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:44:25 by babreton          #+#    #+#             */
/*   Updated: 2023/09/18 15:58:33 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Intern.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

Intern::Intern() {
	std::cout << "[C] Intern default constructor called." << std::endl;
}

Intern::Intern(Intern const &src) {
	std::cout << "[C] Intern copy constructor called." << std::endl;
	*this = src;
}

Intern::~Intern() {
	std::cout << "[D] Intern default destructor called." << std::endl;
}

Intern &	Intern::operator=(Intern const &rSym) {
	(void)rSym;
	return *this;
}

/* -------------------------------------------------------------------------- */
/*                              Geteurs & seteurs                             */
/* -------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------- */
/*                              Members functions                             */
/* -------------------------------------------------------------------------- */

AForm *			Intern::makeForm(str name, Bureaucrat & target) const {
	AForm *	form = NULL;
	AForm *	(Intern::*funcPtr[3])(Bureaucrat & target) const = {&Intern::makePresidential, &Intern::makeRobotomy, &Intern::makeShrubbery};
	str		forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	int		i = -1;

	while (++i < 3) {
		if (forms[i] == name) {
			form = (this->*funcPtr[i])(target);
			std::cout << "Intern create " << name << " form." << std::endl;
			return form;
		}
	}
	std::cout << "Intern can't create " << name << " form : Invalid form name." << std::endl;
	throw Intern::WrongNameException();
	return NULL;
}

AForm *			Intern::makePresidential(Bureaucrat & target) const {
	AForm *	form = new PresidentialPardonForm(target);
	return form;
}

AForm *			Intern::makeRobotomy(Bureaucrat & target) const {
	AForm *	form = new RobotomyRequestForm(target);
	return form;
}

AForm *			Intern::makeShrubbery(Bureaucrat & target) const {
	AForm *	form = new ShrubberyCreationForm(target);
	return form;
}

const char *	Intern::WrongNameException::what() const throw() {
	return ("Invalid form name.");
}