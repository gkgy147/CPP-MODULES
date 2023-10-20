/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:51:42 by grobert           #+#    #+#             */
/*   Updated: 2023/10/14 10:25:45 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class	ShrubberyCreationForm : public AForm
{
	private:
		const std::string	_target;
	
	public:
		 ShrubberyCreationForm( const std::string& target );
    		ShrubberyCreationForm( const ShrubberyCreationForm& src );
    		~ShrubberyCreationForm();

    		ShrubberyCreationForm&  operator=( ShrubberyCreationForm& rhs );

    		void        execute( const Bureaucrat& executor ) const;

};

#endif
