/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:12:16 by grobert           #+#    #+#             */
/*   Updated: 2023/08/22 17:17:44 by grobert          ###   ########.fr       */
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
		Zombie();
		~Zombie();
		void	announce( void );
		Zombie* newZombie( std::string name );
		void	setName( std::string name );
};

Zombie* zombieHorde( int N, std::string name );

#endif // ZOMBIE_HPP
