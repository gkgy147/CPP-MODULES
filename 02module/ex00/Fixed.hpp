/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 09:34:27 by grobert           #+#    #+#             */
/*   Updated: 2023/08/23 10:32:35 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int			_fixedPointValue;
		static const int	_fractionalBits = 8;

	public:
		Fixed();
		Fixed( const Fixed &rhs);
		Fixed& operator=( const Fixed &rhs );
		~Fixed();

		int	getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif // FIXED_HPP
