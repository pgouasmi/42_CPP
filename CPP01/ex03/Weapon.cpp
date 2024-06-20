/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:45:26 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/02 15:45:26 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string &Weapon::getType() const
{
	const std::string &reference = this->type;

	return (reference);
}

void Weapon::setType(std::string newType)
{
	this->type = newType;
}

Weapon::Weapon(std::string WeaponName)
{
	type = WeaponName;
}

Weapon::Weapon()
{
	type = "Fists";
}

Weapon::~Weapon()
{
	std::cout << "Weapon " << type << " deleted" <<std::endl;
}