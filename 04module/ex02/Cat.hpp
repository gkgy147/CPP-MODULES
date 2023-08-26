/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 09:56:51 by grobert           #+#    #+#             */
/*   Updated: 2023/08/26 13:02:55 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	private:
			Brain	*_brain;

	public:
    		Cat( void );
    		~Cat( void );
			
			Cat( const Cat& src );
			Cat& operator=( const Cat& src );

    		void   makeSound( void ) const;
};

#endif
