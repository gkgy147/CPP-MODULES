/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:21:06 by grobert           #+#    #+#             */
/*   Updated: 2023/08/25 14:36:49 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int	_fixedPointValue;
		static const int _fractionalBits = 8;

	public:
		Fixed( void );
		Fixed( const int n );
		Fixed( const float n );
		Fixed( const Fixed &rhs );
		Fixed& operator=( const Fixed &rhs );
		~Fixed();

		int	getRawBits( void ) const;
		void	setRawBits( int const raw );

		float	toFloat( void ) const;
		int	toInt( void ) const;
		
		bool    operator>( const Fixed &rhs ) const ;
    	bool    operator<( const Fixed &rhs ) const ;
    	bool    operator>=( const Fixed &rhs ) const ;
    	bool    operator<=( const Fixed &rhs ) const ;
    	bool    operator==( const Fixed &rhs ) const ;
    	bool    operator!=( const Fixed &rhs ) const ;

		Fixed   operator+( const Fixed &rhs ) const ;
		Fixed   operator-( const Fixed &rhs ) const ;
    	Fixed   operator*( const Fixed &rhs ) const ;
    	Fixed   operator/( const Fixed &rhs ) const ;

    	Fixed&  operator++( void ); // prefix
    	Fixed   operator++( int ); // postfix
    	Fixed&  operator--( void ); // prefix
    	Fixed   operator--( int ); // postfix
		
		static Fixed&   min(Fixed &a, Fixed &b);
        static Fixed&   max(Fixed &a, Fixed &b);
        static Fixed const&   min(Fixed const &a, Fixed const &b);
        static Fixed const&   max(Fixed const &a, Fixed const &b);

};

std::ostream & operator<<( std::ostream& output, Fixed const &i );

#endif

