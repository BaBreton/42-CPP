/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 17:57:58 by babreton          #+#    #+#             */
/*   Updated: 2023/08/13 18:19:07 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "repertory.hpp"

class	PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();

		void	add_contact();
		void	search_contact();
		
	private:
		const	int	max_contacts;
		int			current_nb;
		int			nb_contacts;
		Contact		array[8];

};

#endif