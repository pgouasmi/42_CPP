/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:00:03 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/02 16:00:03 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

void	HumanB::attack()
{
	Weapon temp = *HeldWeapon;
	std::cout << this->name << " attacks with their " << temp.getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &NewWeapon)
{
	HeldWeapon = &NewWeapon;
}

HumanB::HumanB(std::string Name) : name(Name), HeldWeapon(NULL)
{
	name = Name;
	std::cout << "HumanB " << Name << " spawned naked" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB " << name << " deleted." << std::endl;
}

