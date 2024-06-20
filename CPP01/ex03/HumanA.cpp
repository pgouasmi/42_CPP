/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:54:54 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/02 15:54:54 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << HeldWeapon.getType() << std::endl;
}

HumanA::HumanA(std::string Name, Weapon &WeaponConstructor) : name(Name), HeldWeapon(WeaponConstructor)
{
	std::cout << "Human A " << Name << " spawned with " << WeaponConstructor.getType() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA " << name << " deleted." << std::endl;
}