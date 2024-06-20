/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:28:40 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/26 15:41:15 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"
#include <iostream>


/*CANONICAL*/
ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
	this->_Name = "default";
	this->max = 10;
	this->_HitPoints = 10;
	this->_EnergyPoints = 10;
	this->_AttackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Parametric constructor called" << std::endl;
	this->_Name = name;
	this->max = 10;
	this->_HitPoints = 10;
	this->_EnergyPoints = 10;
	this->_AttackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &obj)
{
	std::cout << "Copy assignment called" << std::endl;
	this->_Name = obj._Name;
	this->_AttackDamage = obj._AttackDamage;
	this->_EnergyPoints = obj._EnergyPoints;
	this->_HitPoints = obj._HitPoints;
	return *this;
}
/*CANONICAL*/

/*SETTERS*/
void	ClapTrap::setHitPoints(int nb)
{
	if (nb < 0)
		this->_HitPoints = 0;
	else
	{
		if (nb > this->max)
			this->_HitPoints = max;
		else
			this->_HitPoints = nb;
	}
}
/*SETTERS*/


/*METHODS*/
void	ClapTrap::attack(const std::string& target)
{
	if (!this->_HitPoints)
		std::cout << "ClapTrap " << this->_Name << " has " << this->_HitPoints << " Hit Points left! It can't attack!" << std::endl;
	else if (!this->_EnergyPoints)
		std::cout << "ClapTrap " << this->_Name << " has " << this->_EnergyPoints << " Energy Points left! It can't attack!" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_Name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
		this->_EnergyPoints--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	int temp = this->_HitPoints;
	this->setHitPoints(this->_HitPoints - amount);
	std::cout << "ClapTrap " << this->_Name << " takes " << amount << " damages, dropping its HP from " << temp << " to " << this->_HitPoints << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->_HitPoints)
		std::cout << "ClapTrap " << this->_Name << " has " << this->_HitPoints << " Hit Points left! It can't be repaired!" << std::endl;
	else if (!this->_EnergyPoints)
		std::cout << "ClapTrap " << this->_Name << " has " << this->_EnergyPoints << " Energy Points left! It can't be repaired!" << std::endl;
	else
	{
		int temp = this->_HitPoints;
		this->setHitPoints(temp + amount);
		std::cout << "ClapTrap " << this->_Name << " repairs itself and gets " << amount << " HP back. Its HP go from " << temp << " to " << this->_HitPoints << std::endl;
		this->_EnergyPoints--;
	}
}

/*METHODS*/



