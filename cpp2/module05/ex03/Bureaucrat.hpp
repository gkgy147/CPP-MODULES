/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:34:48 by grobert           #+#    #+#             */
/*   Updated: 2023/10/14 10:38:02 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		const std::string	_name;
		int			_grade;
		
		Bureaucrat();
	
	public:
		Bureaucrat(const std::string& name, int grade);
		Bureaucrat(const Bureaucrat& src);
		~Bureaucrat();
		
		Bureaucrat& operator=(const Bureaucrat& rhs);
		
		std::string	getName() const;
		int		getGrade() const;

		void		incrementGrade();
		void		decrementGrade();
		
		void		signForm(AForm& form);
		void		executeForm(AForm const & form) const;

		//Exception Classes

		class	GradeTooHighException : public std::exception {
			public:
				virtual const char* what()
				const throw() {return "Grade too high";}
		};

		class	GradeTooLowException : public std::exception {
			public:
				virtual const char* what()
				const throw() {return "Grade too low";}
		};
};

std::ostream    &operator << (std::ostream &out, Bureaucrat const &rhs);

#endif

