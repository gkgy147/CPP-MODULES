/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:30:32 by grobert           #+#    #+#             */
/*   Updated: 2023/08/21 22:29:33 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <limits>

class PhoneBook
{
	private:
		Contact		_contacts[8];
		int		_readInput(void) const;
	
	public:
		PhoneBook();
		~PhoneBook();
		void	addContact(void);
		void	printContacts(void) const;
		void	search(void) const;
		void	welcome(void) const;
};

#endif // PHONEBOOK_HPP
