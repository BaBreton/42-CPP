/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:40:39 by babreton          #+#    #+#             */
/*   Updated: 2023/09/18 11:38:55 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PRESIDENTIALPARDONFORM_HPP_
#define _PRESIDENTIALPARDONFORM_HPP_

#include <iostream>
#include <string>
#include "AForm.hpp"

typedef std::string str;

class PresidentialPardonForm : public AForm {
	public:
		PresidentialPardonForm(Bureaucrat & target);
		PresidentialPardonForm(PresidentialPardonForm const &src);
		~PresidentialPardonForm();

		PresidentialPardonForm &	operator=(PresidentialPardonForm const &rSym);

		void	beSigned(Bureaucrat & person);
		void	execute(Bureaucrat & executor) const;
	private:
		Bureaucrat &	_target;
};

std::ostream &	operator<<(std::ostream & o, PresidentialPardonForm const &rSym);

#endif