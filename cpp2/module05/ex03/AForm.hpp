/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AFormm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:26:50 by grobert           #+#    #+#             */
/*   Updated: 2023/10/14 09:38:43 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
#define AForm_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool			_signed;
		const int		_gradeToSign;
		const int		_gradeToExecute;


	public:
		AForm(const std::string name, int gradeToSign, int gradeToExecute);
		AForm(const AForm &src);
		virtual ~AForm();

		AForm& operator=(const AForm &rhs);

		std::string	getName() const;
		bool		getSigned() const;
		int		getGradeToSign() const;
		int		getGradeToExecute() const;

		void		beSigned(const Bureaucrat& bureaucrat);
		virtual void	execute(const Bureaucrat& executor) const = 0;

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
		
		class AFormNotSignedException : public std::exception {
			public:
				virtual const char* what()
					const throw() {return "AForm not signed";}
		};
};

std::ostream& operator<<(std::ostream& out, const AForm& rhs);

#endif
