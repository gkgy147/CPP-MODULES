/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 21:04:31 by grobert           #+#    #+#             */
/*   Updated: 2023/10/14 10:40:05 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
	: AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src)
	: AForm(src), _target(src._target) 
{
	
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs)
{
	if(this != &rhs)
		return (*this);
	return (*this);
}

void	PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	if (!this->getSigned()){
		throw AForm::AFormNotSignedException();
		return;
	}
	else if (executor.getGrade() > this->getGradeToExecute())
	{
		throw AForm::GradeTooLowException();
		return;
	}
	
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
