/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 07:23:38 by grobert           #+#    #+#             */
/*   Updated: 2023/08/31 14:28:49 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << " FRAG TRAP " << this->_name << " constructor called. " << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << " FRAGTRAP " << this->_name << " destructor called. " << std::endl;
}

FragTrap::FragTrap(FragTrap const &other) : ClapTrap(other)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = other;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
    std::cout << "FragTrap assignment operator called" << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
    }
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_name << " request a high five from you!" << std::endl;
}

void FragTrap::attack(std::string const & target)
{
    if (_energyPoints <= 0 || _hitPoints <= 0)
    {
        std::cout << "FragTrap " << _name << " has no energy to attack!" << std::endl;
        return ;
    }
    std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    _energyPoints -= 1;
}

