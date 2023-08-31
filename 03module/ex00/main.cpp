/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 01:05:03 by grobert           #+#    #+#             */
/*   Updated: 2023/08/31 13:42:23 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
   // ClapTrap claptrap1;
    ClapTrap claptrap2("Ironman");
    ClapTrap claptrap3(claptrap2);
    ClapTrap claptrap4("Superman");

   // claptrap1.attack("Ragnar Lothbrok");
    claptrap2.takeDamage(100000000);
    claptrap2.beRepaired(10);

    claptrap2.attack("Batman");
    claptrap4.takeDamage(5);
    claptrap4.beRepaired(1000);
    claptrap4.takeDamage(1000);
    claptrap4.beRepaired(1000);
    return 0;
}
