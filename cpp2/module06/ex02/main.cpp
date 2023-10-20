/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:09:02 by grobert           #+#    #+#             */
/*   Updated: 2023/10/09 18:06:52 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base() {};

A::~A() { std::cout << " ~A" << std::endl; }

B::~B() { std::cout << " ~B" << std::endl; }

C::~C() { std::cout << " ~C" << std::endl; }

Base	*generate()
{
	switch (rand() % 3)
	{
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());

	}

	return NULL;
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Casted to A, ";
	else if (dynamic_cast<B*>(p))
		std::cout << "Casted to B, ";
	else
		std::cout << "Casted to C, ";
}

void	identify(Base &p)
{
	try
	{
		dynamic_cast<A&>(p);
		std::cout << "Casted to &A, ";
	}
	catch (std::exception &e)
	{
		try
		{
			dynamic_cast<B&>(p);
			std::cout << "Casted to &B, ";
		}
		catch (std::exception &e)
		{
			std::cout << "Casted tp &C, ";
		}
	}
}

int	main(void)
{
	/*Base	*tmp;

	for (int i = 0; i < 10; i++)
	{
		tmp = generate();
		identify(tmp);
		identify(*tmp);
		delete tmp;
	} */
	
	Base*   a = generate();
    Base*   b = generate();
    Base*   c = generate();
    Base*   d = generate();

    std::cout << "/* **************************************** */" << std::endl;

    std::cout << "a* = "; identify( a );
    std::cout << "a& = "; identify( *a ); std::cout << std::endl;

    std::cout << "b* = "; identify( b );
    std::cout << "b& = "; identify( *b ); std::cout << std::endl;

    std::cout << "c* = "; identify( c );
    std::cout << "c& = "; identify( *c ); std::cout << std::endl;

    std::cout << "d* = "; identify( d );
    std::cout << "d& = "; identify( *d ); std::cout << std::endl;

    std::cout << "/* ***************************************** */" << std::endl;


    delete a;
    delete b;
    delete c;
    delete d;

	return (0);
}
