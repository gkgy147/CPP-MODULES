/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Streamed.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:52:50 by grobert           #+#    #+#             */
/*   Updated: 2023/08/29 19:12:09 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Streamed.hpp"

Streamed::Streamed()
{
    //std::cout << "The constuctor has been called" << std::endl;
}

Streamed::~Streamed()
{
  //  std::cout << "The destructor has been called" << std::endl;
}

std::string Streamed::ft_replace(std::string content, std::string s1, std::string s2)
{
    if (s1.empty())
        return (content);
    // Find position of string s1
    size_t  index = content.find(s1);
    // Check if position is -1 or not
    while(index != std::string::npos)
    {
        content.erase(index, s1.size());
        content.insert(index, s2);
        index = content.find(s1);
    }
    return (content);
}
