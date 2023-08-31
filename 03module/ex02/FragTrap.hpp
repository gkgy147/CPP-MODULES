/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 06:26:11 by grobert           #+#    #+#             */
/*   Updated: 2023/08/31 14:24:14 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"


class FragTrap : public ClapTrap
{
    public:
        FragTrap(std::string name);
        FragTrap(FragTrap const & other);
        ~FragTrap(void);

        FragTrap & operator=(FragTrap const & rhs);
        void attack(std::string const & target);
        void highFivesGuys(void);
};
#endif
