/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 01:05:03 by grobert           #+#    #+#             */
/*   Updated: 2023/08/26 07:41:57 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main( void )
{
    FragTrap ash( "Ash" );
    FragTrap ash2( ash );

    ash.attack( "the air" );
    ash.takeDamage( 10 );
    ash.beRepaired( 10 );
    ash.highFive();

    return 0;
}


/*int main()
{
    ScavTrap scav("Odin");
    scav.attack("target");
    scav.takeDamage(10);
    scav.beRepaired(10);
    scav.guardGate();

    FragTrap frag("Thor");
    frag.attack("target");
    frag.takeDamage(10);
    frag.beRepaired(10);
    frag.highFivesGuys();
    return 0;
}*/