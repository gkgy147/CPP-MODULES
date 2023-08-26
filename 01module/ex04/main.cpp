/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 03:42:27 by grobert           #+#    #+#             */
/*   Updated: 2023/08/23 03:48:03 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Streamed.hpp"

int	main( int ac, char **av)
{
	if (ac != 4) {
		std::cerr << "Usage: ./Streamed <filename> <to_find> <replace>." <<std::endl;
		return EXIT_FAILURE;
	} 
	else {
		Streamed sed(av[1]);
		sed.replace(av[2], av[3]);
	}
	return EXIT_SUCCESS;
}

