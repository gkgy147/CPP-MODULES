/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:14:06 by grobert           #+#    #+#             */
/*   Updated: 2023/08/26 12:58:00 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string _idea[100];

	public:
		Brain( void );
		~Brain( void );

		Brain( const Brain& src);
		Brain& operator=( const Brain& rhs );
};

#endif
