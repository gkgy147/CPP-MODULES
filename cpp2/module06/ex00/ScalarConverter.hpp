/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 02:39:26 by grobert           #+#    #+#             */
/*   Updated: 2023/10/08 10:59:31 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <iomanip>
#include <cctype>	

class	ScalarConverter
{
	private:
		static int	type;
	
	public:
		ScalarConverter(void);
		ScalarConverter(ScalarConverter const &src);
		~ScalarConverter(void);

		ScalarConverter &operator=(ScalarConverter const &rhs);

		static void	convert(std::string str);
		static bool	ft_in(std::string str);
		static bool	ft_check_input(std::string str);
		static int	stoi(std::string &s);
};

#endif
