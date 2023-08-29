/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Streamed.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:50:24 by grobert           #+#    #+#             */
/*   Updated: 2023/08/29 18:59:50 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STREAMED_HPP
#define STREAMED_HPP

#include <string.h>
#include <iostream>
#include <fstream>

class Streamed
{

	private:
		
	public:
    		Streamed();
    		~Streamed();

    		std::string ft_replace(std::string content, std::string s1, std::string s2);
};

#endif
