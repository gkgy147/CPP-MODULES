/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 00:58:54 by grobert           #+#    #+#             */
/*   Updated: 2023/10/10 01:03:26 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	int	arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	std::vector< int >      vect( arr, arr + sizeof( arr ) / sizeof( int ) );
	std::list< int >        list( arr, arr + sizeof( arr ) / sizeof( int ) );

	easyfind(vect, 2);
	easyfind(list, 7);

	easyfind(vect, 11);
	easyfind(list, -1);

	return (0);
}
