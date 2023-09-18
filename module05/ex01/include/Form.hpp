/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:49:30 by babreton          #+#    #+#             */
/*   Updated: 2023/09/18 10:34:26 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FORM_HPP_
#define _FORM_HPP_

#include <iostream>
#include <string>
#include <stdexcept>

typedef std::string str;

#include "Bureaucrat.hpp"

class Form {
	public:
		Form(str name, int signGrade);
		Form();
		Form(Form const &src);
		~Form();

		Form &	operator=(Form const &rSym);
		str		getName() const;
		bool	getSigned() const;
		int		getSignGrade() const;
		int		getExecuteGrade() const;

		void	beSigned(Bureaucrat &person);

		class GradeTooHighException : public std::exception {
			public:
				virtual const char *	what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char *	what() const throw();
		};
	private:
		str const	_name;
		bool		_signed;
		int const	_signGrade;
		int const	_executeGrade;
};

std::ostream &	operator<<(std::ostream & o, Form const &rSym);

#endif