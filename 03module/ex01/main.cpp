/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 01:05:03 by grobert           #+#    #+#             */
/*   Updated: 2023/08/31 14:02:52 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("He-Man");
    ScavTrap scav2("Spiderman");
    ScavTrap scav3 = scav;
    scav.attack("Thor");
    scav2.takeDamage(500);
    scav2.beRepaired(10);
    scav2.guardGate();
    return 0;
}
