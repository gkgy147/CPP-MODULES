/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 01:40:49 by grobert           #+#    #+#             */
/*   Updated: 2023/08/31 14:03:51 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	private:
		ScavTrap();
	
	public:
		ScavTrap( std::string name );
		~ScavTrap();
		
		ScavTrap(ScavTrap const & other);
		ScavTrap & operator=(ScavTrap const & rhs);

		void	attack(std::string const& target);
		void	guardGate();
};

#endif
