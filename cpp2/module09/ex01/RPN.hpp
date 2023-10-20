/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 19:56:10 by grobert           #+#    #+#             */
/*   Updated: 2023/10/14 00:28:53 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>
#include<stack>
#include<stdexcept>
#include<string>
#include<sstream>

class	RPN 
{
	public:
		RPN(const std::string &expression);
		RPN(RPN const & src);
		~RPN();
		RPN & operator=(RPN const & rhs);
		
		int getResult() const;
		void evaluate();
	
	private:
		std::string	expression;
		int		result;

		void		applyOperator(std::stack<int> &operands, char op);

		struct	InvalidOperator : public std::exception {
			const char* what() const throw() {
				return "Invalid operator";
			}
		};
};

