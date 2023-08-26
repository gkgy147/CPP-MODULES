/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:43:45 by grobert           #+#    #+#             */
/*   Updated: 2023/08/26 14:17:08 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::welcome(void) const {
	std::cout << std::endl;
	std::cout << " My Awesome PhoneBook " << std::endl;
	std::cout << std::endl;
	std::cout << "-----USAGE-----" << std::endl;
	std::cout << "ADD\t: To add a contact." << std::endl;
	std::cout << "SEARCH\t: To search for a contact." << std::endl;
	std::cout << "EXIT\t: To quit the PhoneBook." << std::endl;
	std::cout << "******************************" << std::endl;
	std::cout << std::endl;
}

void	PhoneBook::addContact(void){
	static int i;
	this->_contacts[i % 8].init();
	this->_contacts[i % 8].setIndex(i % 8);
	i++;
}

void	PhoneBook::printContacts(void) const {
	std::cout << "_-_-_-_-_-_ CONTACTS _-_-_-_-_-_" << std::endl;
	for (size_t i = 0;i < 8; i++) {
		this->_contacts[i].view(i);
	}
	std::cout << std::endl;
}

int	PhoneBook::_readInput() const {
	int input = -1;
	bool	valid = false;
	do{
		std::cout << "Enter the contact index: " << std::flush;
		std::cin >> input;
		if (std::cin.good() && (input >= 0 && input <= 8)) {
			valid = true;
		}
		else
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid index, renter the index." << std::endl;
		}
	} while(!valid);
	return (input);
}

void	PhoneBook::search(void) const {
	int i = this->_readInput();
	if( i <= 7){
	this->_contacts[i].display(i);
	}
	else 
	{
		std::cout << "Wrong Input " << std::endl;
		i = this->_readInput();
	}
}
