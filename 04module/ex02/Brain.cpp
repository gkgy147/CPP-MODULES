/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:08:26 by grobert           #+#    #+#             */
/*   Updated: 2023/08/26 13:44:29 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Brain constructed" << std::endl;
}

Brain::~Brain( void )
{
	std::cout << "Brain destructed" << std::endl;
}

Brain::Brain( const Brain& src )
{
	*this = src;
}

Brain& Brain::operator=(const Brain& src)
{
	std::cout << "Brain assignment operator called." << std::endl;
	if ( this != &src )
	{
		for (int i = 0; i < 100; i++ ) {
			this->_idea[i] = src._idea[i];
		}
	}
	return *this;
}
