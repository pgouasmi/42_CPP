/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:23:14 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/26 15:37:26 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.hpp"
#include <iostream>

/*CANONICAL*/

ScavTrap::ScavTrap()
{
	std::cout << "SCAAAAVTRAAAAAAAAAAAAAAAP IS BORN (default)" << std::endl;
	this->_Name = "default";
	this->_HitPoints = 100;
	this->max = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "SCAAAAVTRAAAAAAAAAAAAAAAP IS BORN (parametric)" << std::endl;
	this->_Name = name;
	this->_HitPoints = 100;
	this->max = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap &obj)
{
	std::cout << "SCAAAAVTRAAAAAAAAAAAAAAAP IS BORN (but by copy)" << std::endl;
	*this = obj;
}

ScavTrap &ScavTrap::operator=(ScavTrap &obj)
{
	this->_Name = obj._Name;
	this->_AttackDamage = obj._AttackDamage;
	this->_EnergyPoints = obj._EnergyPoints;
	this->_HitPoints = obj._HitPoints;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SCAAAAVTRAAAAAAAAAAAAAAAP OUUUUUUUUT" << std::endl;
}
/*CANONICAL*/

/*METHODS*/
void	ScavTrap::guardGate()
{
	if (!this->_HitPoints)
		std::cout << "ScavTrap " << this->_Name << " has " << this->_HitPoints << " Hit Points left! It can't use guard Gate!" << std::endl;
	else if (!this->_EnergyPoints)
		std::cout << "ScavTrap " << this->_Name << " has " << this->_EnergyPoints << " Energy Points left! It can't use guard Gate!" << std::endl;
	else
		std::cout << "ScavTrap " << this->_Name << " is now in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string &tar_)
{
	if (!this->_HitPoints)
		std::cout << "ScavTrap " << this->_Name << " has " << this->_HitPoints << " Hit Points left! It can't attack!" << std::endl;
	else if (!this->_EnergyPoints)
		std::cout << "ScavTrap " << this->_Name << " has " << this->_EnergyPoints << " Energy Points left! It can't attack!" << std::endl;
	else
		std::cout << "SCAAAAAAAAAAAAAAV " << this->_Name << " pulls out his gun and inflicts " << this->_AttackDamage << " damage to " << tar_ << std::endl;
}
/*METHODS*/
