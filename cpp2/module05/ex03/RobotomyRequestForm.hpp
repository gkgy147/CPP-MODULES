/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:16:38 by grobert           #+#    #+#             */
/*   Updated: 2023/10/14 10:20:42 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RobotomyRequestForm_hpp
#define RobotomyRequestForm_hpp

#include "AForm.hpp"
# include <cstdlib>

class RobotomyRequestForm : public AForm
{
	private:
		const std::string	_target;

	public:
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(const RobotomyRequestForm &src);
		~RobotomyRequestForm();

		RobotomyRequestForm &operator=(RobotomyRequestForm &rhs);

		void	execute(const Bureaucrat &executor) const;
};

#endif
