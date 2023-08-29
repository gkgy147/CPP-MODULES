/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 03:42:27 by grobert           #+#    #+#             */
/*   Updated: 2023/08/29 18:30:47 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Streamed.hpp"

int	main( int ac, char **av)
{
	if (ac != 4) {
		std::cerr << "Usage: ./Streamed <filename> <to_find> <replace>." <<std::endl;
		return 1;
	} 
	else {
		Streamed sed(av[1]);
		sed.replace(av[2], av[3]);
	}
	return 0;
}

