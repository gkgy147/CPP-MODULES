/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 20:05:34 by grobert           #+#    #+#             */
/*   Updated: 2023/10/14 00:27:43 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <string>

RPN::RPN(const	std::string &expression) : expression(expression), result(0)
{
	if (expression.empty())
		throw InvalidOperator();

	for (size_t i = 0; i < expression.size(); ++i) {
		char c = expression[i];
		if (!(std::isdigit(c) && std::string("+-*/ ").find(c) == std::string::npos))
			throw InvalidOperator();
        	if (std::string("+-*/").find(c) != std::string::npos && i + 1 != expression.size() && expression[i + 1] != ' ')
            		throw InvalidOperator();
        	if (std::isdigit(c) && !(std::isdigit(expression[i + 1])) && expression[i + 1] != ' ')
            		throw InvalidOperator();
    }
}

RPN::RPN(RPN const &src)
{ 
	*this = src; 
}

RPN::~RPN(void){ }

RPN	&RPN::operator = (RPN const &rhs)
{
	if (this == &rhs)
		return (*this);
	this->expression= rhs.expression;
	this->result = rhs.result;
	return (*this);
}



int RPN::getResult() const {
    return result;
}

void	RPN::evaluate()
{
	std::stack<int> operands;
	size_t i = 0;
		
	while ( i < expression.size()) 
	{
		std::string token;
		while(i < expression.size() && expression[i] != ' ')
		{
			token += expression[i];
			++i;
		}

		if (!token.empty()) 
		{
			if (std::isdigit(token[0]) || (token[0] == '-' && token.size() > 1)) {
				int number;
				std::istringstream(token) >> number; // Use stringstream for conversion
                operands.push(number);

			} else if (token.size() == 1 && std::string("+-*/").find(token[0]) != std::string::npos) {
				if (operands.size() < 2) {
					std::cerr << "Error: Invalid operator" << std::endl;
					return;
				}
				applyOperator(operands, token[0]);
			} else {
				std::cerr << "Error: Invalid operator" << std::endl;
				return;
			}
		}
		++i;
	}

	if (operands.size() == 1) {
		result = operands.top();
	} else {
		std::cerr << "Error: Invalid expression" << std::endl;
	}
}

void	RPN::applyOperator(std::stack<int> &operands, char op)
{
	int b = operands.top();
	operands.pop();
	int a = operands.top();
	operands.pop();

	switch (op)
	{
		case '*':
			operands.push(a * b);
			break;
		case '/':
			if (b == 0) {
				std::cerr << "Error: Division by zero" << std::endl;
				return;
			}
			operands.push(a / b);
			break;
		case '+':
			operands.push(a + b);
			break;
		case '-':
			operands.push(a - b);
			break;
		default:
			std::cerr << "Error: Invalid operator" << std::endl;
	}
}
