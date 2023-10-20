/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AFormm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 22:18:22 by grobert           #+#    #+#             */
/*   Updated: 2023/10/14 09:39:19 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(const std::string name, int gradeToSign, int gradeToExecute) 
	: _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) 
{
	if(gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	else if(gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &src) :_name(src.getName()), _signed(src.getSigned()),
_gradeToSign(src.getGradeToSign()), _gradeToExecute(src.getGradeToExecute())
{
	//*this = src;
}


AForm::~AForm() {}

AForm& AForm::operator=(const AForm &rhs) 
{
	if (this != &rhs)
		this->_signed = rhs.getSigned();
	return (*this);
}

std::string AForm::getName() const
{
	return (this->_name);
}

bool	AForm::getSigned() const
{
	return (this->_signed);
}

int	AForm::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int   AForm::getGradeToExecute() const {
    return (this->_gradeToExecute);
}

void	AForm::beSigned(const Bureaucrat &bureaucrat)
{
	this->_signed = (bureaucrat.getGrade() > _gradeToSign) ? false : true;
	if (!this->_signed)
		throw AForm::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& out, const AForm& form) 
{
    out << "AForm details:" << std::endl;
    out << "Name: " << form.getName() << std::endl;
    out << "Grade to sign: " << form.getGradeToSign() << std::endl;
    out << "Grade to execute: " << form.getGradeToExecute() << std::endl;
    return out;
}
