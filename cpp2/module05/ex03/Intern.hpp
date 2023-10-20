/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:50:13 by grobert           #+#    #+#             */
/*   Updated: 2023/10/14 15:42:50 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Bureaucrat.hpp"

class AForm;

class Intern
{
	private:

	public:
		Intern(void);
		Intern(Intern const &src);
		~Intern(void);

		void	operator= (Intern const &rhs);

		AForm	*makeForm(std::string name, std::string target);
		class FromNotFound : public std::exception 
		{
            public:
                const char *what() const throw()
				{return "Form not found";}
        };
};
