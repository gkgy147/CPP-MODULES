/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 00:19:25 by grobert           #+#    #+#             */
/*   Updated: 2023/10/14 00:22:15 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error\nType: 'invalid arguments'" << std::endl;
		return (1);
	}
	try
	{
		RPN	rpn(av[1]);
		rpn.evaluate();
		std::cout << "Result is: [" << rpn.getResult() << "]" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Error\nType: '" << e.what() << "'" << std::endl;
	}
	return (0);
}
