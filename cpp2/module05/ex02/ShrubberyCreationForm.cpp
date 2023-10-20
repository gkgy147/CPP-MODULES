/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:59:49 by grobert           #+#    #+#             */
/*   Updated: 2023/10/14 11:06:02 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( const std::string& target ) 
	: AForm( "ShrubberyCreationForm", 145, 137 ), _target( target ) 
{
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& src )
	: AForm( src ), _target( src._target )
{
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( ShrubberyCreationForm& rhs )
{
    if ( this != &rhs )
        return *this;
    return *this;
}

void    ShrubberyCreationForm::execute( const Bureaucrat& executor ) const 
{
    if ( !this->getSigned() )
        throw AForm::AFormNotSignedException();
    else if ( executor.getGrade() > this->getGradeToExecute() ) {
        throw AForm::GradeTooLowException();
    }

   std::ofstream outFile((_target + "_shrubbery").c_str());

    if (!outFile)
	{
        std::cerr << "can't open/create" << this->getName() + "_shrubbery" << std::endl;
        return ;
    }
    outFile <<
    "            # #### ####\n"
    "        ### \\/#|### |/####\n"
    "        ##\\/#/ \\||/##/_/##/_#\n"
    "       ###  \\/###|/ \\/ # ###\n"
    "    ##_\\_#\\_\\## | #/###_/_####\n"
    "    ## #### # \\ #| /  #### ##/##\n"
    "    __#_--###`  |{,###---###-~\n"
    "                \\ }{\n"
    "                }}{\n"
    "                }}{\n"
    "        akarafi {{}\n"
    "        , -=-~{ .-^- _\n"
    "                `}\n"
    "                 {"
    << std::endl;
    outFile.close();
}
