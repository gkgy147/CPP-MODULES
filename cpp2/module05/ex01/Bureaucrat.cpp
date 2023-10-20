/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:55:29 by grobert           #+#    #+#             */
/*   Updated: 2023/10/14 09:07:19 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name) 
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    _grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& src)
    : _name(src._name), _grade(src._grade)
{
    //std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	//std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs) {
    if (this != &rhs) {
        // Only copy grade,bcz name is const and cannot be changed.
        _grade = rhs.getGrade();
    }
    return *this;
}


std::string Bureaucrat::getName() const 
{
    return (this-> _name);
}

int Bureaucrat::getGrade() const {
    return (this->_grade);
}

void    Bureaucrat::incrementGrade() {
    if ( _grade <= 1 )
        throw Bureaucrat::GradeTooHighException();
    _grade--;
    std::cout << "Grade increased to " << this->getGrade() << std::endl;
}

void    Bureaucrat::decrementGrade() {
    if ( _grade >= 150 )
        throw Bureaucrat::GradeTooLowException();
    _grade++;
    std::cout << "Grade decreased to " << this->getGrade() << std::endl;
}

std::ostream& operator<<( std::ostream& out, const Bureaucrat& rhs ) {
    out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
    return (out);
}

void    Bureaucrat::signForm( Form& form ) {
    try {
        form.beSigned(*this);
        std::cout << _name << " signed" << form.getName() << std::endl;
    }
    catch ( Form::GradeTooHighException& e ) {
        std::cout << _name << " couldnt sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

