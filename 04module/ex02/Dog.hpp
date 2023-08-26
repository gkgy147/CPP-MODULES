/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 09:50:15 by grobert           #+#    #+#             */
/*   Updated: 2023/08/26 13:20:17 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	private:
		Brain   *_brain;

	public:
		Dog( void );
		~Dog( void );

		Dog( const Dog& src );
    	Dog& operator=( const Dog& src );
		
		void makeSound( void ) const;

};

#endif
