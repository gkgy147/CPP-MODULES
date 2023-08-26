/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:30:48 by grobert           #+#    #+#             */
/*   Updated: 2023/08/22 17:35:00 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define N 4

int	main ( void ) {

	Zombie *zombiezz = zombieHorde(N, "zombiezzzzz");

	for (size_t i = 0; i < N; i++) {
		zombiezz[i].announce();
	}

	delete [] zombiezz;
	return 0;
}

