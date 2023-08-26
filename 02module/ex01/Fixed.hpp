/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:26:26 by grobert           #+#    #+#             */
/*   Updated: 2023/08/25 14:08:24 by grobert          ###   ########.fr       */
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
		Fixed( const int n );
		Fixed( const float n );
		Fixed( const Fixed &rhs);
		Fixed& operator=( const Fixed &rhs );
		~Fixed();

		int	getRawBits( void ) const;
		void	setRawBits( int const raw );

		float	toFloat( void ) const;
		int	toInt( void ) const;
};

std::ostream & operator<<( std::ostream& output, Fixed const &i );

#endif // FIXED_HPP
