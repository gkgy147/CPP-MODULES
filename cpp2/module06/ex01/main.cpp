/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:19:29 by grobert           #+#    #+#             */
/*   Updated: 2023/10/09 14:37:16 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	
	Data		*ptr = new Data;
	Data		*new_ptr;
	uintptr_t	raw;

	ptr->data = "test string";
	raw = Serializer::serialize(ptr);
	new_ptr = Serializer::deserialize(raw);
	std::cout << "new_ptr->data = " << new_ptr->data <<std::endl;

	delete ptr;
	return 0;
}
