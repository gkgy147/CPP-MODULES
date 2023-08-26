/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:23:14 by grobert           #+#    #+#             */
/*   Updated: 2023/08/21 18:33:44 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include  <limits>
#include <iostream>

int	main(void) {
	PhoneBook book;
	std::string input = "";
	book.welcome();
	while(input.compare("EXIT")){
		if (input.compare("ADD") == 0)
			book.addContact();
		else if (input.compare("SEARCH") == 0) {
			book.printContacts();
			book.search();
		}
		std::cout << "-> " << std::flush;
		std::cin >> input;
	}
	return 0;
}
