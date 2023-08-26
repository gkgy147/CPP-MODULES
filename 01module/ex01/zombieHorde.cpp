/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:23:05 by grobert           #+#    #+#             */
/*   Updated: 2023/08/22 17:36:06 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name) {
	Zombie *zombiezz = new Zombie[N];
	for (int i = 0; i < N; i++) {
		zombiezz[i].setName( name );
	}

	return zombiezz;
}
