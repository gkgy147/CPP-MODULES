/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 10:37:18 by grobert           #+#    #+#             */
/*   Updated: 2023/10/08 10:39:39 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int ac, char **av)
{
	ScalarConverter	scalarconverter;

	if (ac != 2)
	{
		std::cerr << "Error\nWrong arguments" << std::endl;
		return (1);
	}
	for (int i = 1; i < ac; i++)
	{
		scalarconverter.convert(av[i]);
		std::cout << std::endl;
	}
	return (0);
}
