/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 08:35:48 by grobert           #+#    #+#             */
/*   Updated: 2023/08/26 11:00:03 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string _type;

	public:
		Animal( void );
		Animal( std::string type );

		virtual	~Animal( void );

		Animal( const Animal &src);
		Animal& operator=( const Animal &rhs);

		virtual void 	makeSound( void ) const;
		std::string	getType( void ) const;
};

#endif
