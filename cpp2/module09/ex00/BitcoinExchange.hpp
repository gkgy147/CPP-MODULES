/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:48:16 by grobert           #+#    #+#             */
/*   Updated: 2023/10/13 02:23:28 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdlib.h>
#include <iostream>
#include <map>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <fstream>

class BitcoinExchange
{
	private:
		BitcoinExchange(void);
    		
		BitcoinExchange(BitcoinExchange const &be);
    	~BitcoinExchange(void);
    	BitcoinExchange &operator=(BitcoinExchange const &be);

    	static bool isValidDate(int d, int m, int y);
    	static std::map<std::string, double> uploadDB(std::string const &path);

    	static std::map<std::string, double>  _db;

	public:
    		// METHODS
    		static double const &getPrice(std::string const &date);
    		static void exchange(std::string const &path);

    		// EXCEPTIONS
    		class InvalidDB : public std::exception
    		{
    		public:
        		virtual const char *what() const throw()
        		{ return ("Invalid database file"); }
    		};
    		class InvalidInputFile : public std::exception
    		{
    		public:
        		virtual const char *what() const throw()
        		{ return ("Invalid input file"); }
    		};
};

