/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 06:41:29 by grobert           #+#    #+#             */
/*   Updated: 2023/10/10 06:43:11 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*#define ELEM 16

int	main(void)
{
	Span	s(ELEM);

	for (int i = 0; i < ELEM / 2; i++)
		s.addNumber(rand());

	std::cout << "My longest span: " << s.longestSpan() << std::endl;
	std::cout << "My shortest span: " << s.shortestSpan() << std::endl;

	std::vector<int>	tmp;

	tmp.resize(ELEM / 2);
	for (int i = 0; i < ELEM / 2; i++)
		tmp[i] = i;

	s.addIter(tmp.begin(), tmp.end());

	std::cout << "My longest span: " << s.longestSpan() << std::endl;
	std::cout << "My shortest span: " << s.shortestSpan() << std::endl;

	std::cout << s << std::endl;

	return (0);
}*/

int main()
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
return 0;
}
