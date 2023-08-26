/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 08:18:30 by grobert           #+#    #+#             */
/*   Updated: 2023/08/23 08:44:22 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av) {

	if (ac != 2) {
		std::cout << "Format: ./harlFilter level\n";
		return 1;
	}
	
	std::string input = av[1];
	Harl harl;
	
	harl.complain(input);
	
	return 0;
}	
