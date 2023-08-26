/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Streamed.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 02:38:09 by grobert           #+#    #+#             */
/*   Updated: 2023/08/23 03:52:03 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STREAMED_HPP
#define STREAMED_HPP

#include <iostream>
#include <fstream>

class Streamed
{
	private:
		std::string _inFile;
		std::string _outFile;

	public:
		Streamed( std::string filename);
		~Streamed();

		void	replace( std::string s1, std::string s2);
};

#endif // STREAMED_HPP (Stream editor)
