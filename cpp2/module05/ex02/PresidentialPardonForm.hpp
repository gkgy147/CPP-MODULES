/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 20:55:46 by grobert           #+#    #+#             */
/*   Updated: 2023/10/14 11:02:43 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class AForm;

class	PresidentialPardonForm : public AForm
{
	private:
		const std::string	_target;

	public:
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm& src);
		~PresidentialPardonForm();
		
		PresidentialPardonForm& operator=(const PresidentialPardonForm& rhs);
		
		void	execute(const Bureaucrat& executor) const;
};

#endif
