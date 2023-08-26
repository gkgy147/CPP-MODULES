/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 21:01:47 by grobert           #+#    #+#             */
/*   Updated: 2023/08/22 22:48:23 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) {
	this->setType(type);
}

Weapon::~Weapon() {
}

const	std::string& Weapon::getType( void ){
	return this->type;
}

void	Weapon::setType( std::string newType ) {
	this->type = newType;
}

