/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 01:05:03 by grobert           #+#    #+#             */
/*   Updated: 2023/08/31 14:23:09 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main( void )
{
   /* 
    ScavTrap scav("John Wick");
    scav.attack("Dog");
    scav.takeDamage(10);
    scav.beRepaired(10);
    scav.guardGate();
    */

    FragTrap frag("Professor");
    frag.attack("Pablo");
    frag.takeDamage(10);
    frag.beRepaired(10);
    frag.highFivesGuys();

    return 0;
}


