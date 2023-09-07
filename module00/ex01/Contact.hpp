/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 13:06:52 by babreton          #+#    #+#             */
/*   Updated: 2023/08/13 16:33:59 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include "repertory.hpp"

class	Contact {
	public:
		Contact();
		~Contact();

		void	setName(str name);
		void	setLast(str last);
		void	setNick(str nick);
		void	setPhone(str phone);
		void	setSecret(str secret);
		str		getName() const;
		str		getLast() const;
		str		getNick() const;
		str		getPhone() const;
		str		getSecret() const;

	private:
		str	name;
		str	last;
		str	nick;
		str	phone;
		str	secret;
};

#endif