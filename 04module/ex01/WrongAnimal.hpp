/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 10:14:33 by grobert           #+#    #+#             */
/*   Updated: 2023/08/26 10:18:59 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string _type;

	public:
		WrongAnimal( void );
		WrongAnimal( std::string type);
		~WrongAnimal( void );

		WrongAnimal( const WrongAnimal& src );
		WrongAnimal& operator=( const WrongAnimal &rhs);

		void		makeSound( void ) const;
		std::string	getType( void ) const;

};

#endif
