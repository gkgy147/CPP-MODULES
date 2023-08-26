/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 01:40:49 by grobert           #+#    #+#             */
/*   Updated: 2023/08/26 07:39:01 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	protected:
		ScavTrap();
	
	public:
		ScavTrap( std::string name );
		~ScavTrap();

		void	attack(std::string const& target);
		void	guardGate();
};

#endif
