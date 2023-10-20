/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:26:24 by grobert           #+#    #+#             */
/*   Updated: 2023/10/14 10:40:25 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
	: AForm("Robotomy Request AForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src )
	: AForm(src), _target(src._target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm &rhs)
{
	if (this != &rhs)
		return *this;
	return *this;
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	else
	{
		std::cout<< "Making some drilling noises... BZZZZZ" << std::endl;
		if (rand() % 2)
			 std::cout << _target << " has been robotomized!" << std::endl;
		else
			std::cout << _target << " Robotomy failed!" << std::endl;
	}
}

