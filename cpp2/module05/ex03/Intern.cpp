/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:53:44 by grobert           #+#    #+#             */
/*   Updated: 2023/10/14 15:44:14 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {}

Intern::Intern(Intern const &src)
{
	(void)src;
	return;
}

Intern::~Intern() 
{
}

void	Intern::operator = (Intern const &rhs)
{
	if (this == &rhs)
		return;
	return;
}

AForm *Intern::makeForm(std::string name, std::string target)
{
    AForm *form;

   
    if (name == "shrubbery request" || name == "robotomy request" || name == "presidential request") 
    {
        char firstChar = name[0]; 

        switch (firstChar) 
        {
            case 'r': 
                form = new RobotomyRequestForm(target);
                break;
            case 's': 
                form = new ShrubberyCreationForm(target);
                break;
            case 'p': 
                form = new PresidentialPardonForm(target);
                break;
        }

        std::cout <<"Intern creates " << name << std::endl;
    } 
    else 
    {
        throw Intern::FromNotFound();
    }

    return form;
}



