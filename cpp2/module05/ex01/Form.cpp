/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 22:18:22 by grobert           #+#    #+#             */
/*   Updated: 2023/10/14 09:59:45 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string &name, int gradeToSign, int gradeToExecute) 
	: _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) 
{
	if(gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if(gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &src) :_name(src.getName()), _signed(src.getSigned()),
_gradeToSign(src.getGradeToSign()), _gradeToExecute(src.getGradeToExecute())
{
	//*this = src;
}


Form::~Form() {}

Form& Form::operator=(const Form &rhs) 
{
	if (this != &rhs)
		this->_signed = rhs.getSigned();
	return (*this);
}

std::string Form::getName() const
{
	return (this->_name);
}

bool	Form::getSigned() const
{
	return (this->_signed);
}

int	Form::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int   Form::getGradeToExecute() const {
    return (this->_gradeToExecute);
}

void	Form::beSigned(const Bureaucrat &bureaucrat)
{
	this->_signed = (bureaucrat.getGrade() > _gradeToSign) ? false : true;
	if (!this->_signed)
		throw Form::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& out, const Form& form) 
{
    out << "Form details:" << std::endl;
    out << "Name: " << form.getName() << std::endl;
    out << "Grade to sign: " << form.getGradeToSign() << std::endl;
    out << "Grade to execute: " << form.getGradeToExecute() << std::endl;
    return out;
}

