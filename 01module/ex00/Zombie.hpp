/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 23:34:08 by grobert           #+#    #+#             */
/*   Updated: 2023/08/21 23:54:39 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string _name;

	public:
		Zombie( std::string name);
		~Zombie();
		void	announce( void );
		Zombie* newZombie( std::string name );
		void	randomChump( std::string name );
};

Zombie  *newZombie( std::string name );
void    randomChump( std::string name );

#endif // ZOMBIE_HPP
