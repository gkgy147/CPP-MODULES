/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 02:03:14 by grobert           #+#    #+#             */
/*   Updated: 2023/10/13 02:09:11 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Error\nType: Invalid input" << std::endl;
        return 1;
    }

    try
    {
        BitcoinExchange::exchange(argv[1]);
    }
    catch (std::exception &e)
    {
        std::cout << "Error\nType: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}

