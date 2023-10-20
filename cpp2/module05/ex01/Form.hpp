/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:26:50 by grobert           #+#    #+#             */
/*   Updated: 2023/10/14 09:58:04 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool			_signed;
		const int		_gradeToSign;
		const int		_gradeToExecute;

	public:
		Form(const std::string &name, int gradeToSign, int gradeToExecute);
		Form(const Form &src);
		~Form();

		Form& operator=(const Form &rhs);

		std::string	getName() const;
		bool		getSigned() const;
		int		getGradeToSign() const;
		int		getGradeToExecute() const;

		void		beSigned(const Bureaucrat& bureaucrat);

		//Exception Class
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what()
					const throw() {return "Grade too high";}
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what()
					const throw() {return "Grade too low";}
		};
};

std::ostream& operator<<(std::ostream& out, const Form& rhs);

#endif
