/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:47:43 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/26 15:36:01 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FragTrap.hpp"
#include <iostream>

/*CANONICAL*/

FragTrap::FragTrap()
{
	std::cout << "FRAAAAGTRAAAAAAAAAAAAAAAP IS BORN(default)" << std::endl;
	this->_Name = "default";
	this->_HitPoints = 100;
	this->max = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FRAAAAGTRAAAAAAAAAAAAAAAP IS BORN (parametric)" << std::endl;
	this->_Name = name;
	this->_HitPoints = 100;
	this->max = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
}

FragTrap::FragTrap(FragTrap &obj)
{
	std::cout << "FRAAAAGTRAAAAAAAAAAAAAAAP IS BORN (but by copy)" << std::endl;
	*this = obj;
}

FragTrap &FragTrap::operator=(FragTrap &obj)
{
	this->_Name = obj._Name;
	this->_AttackDamage = obj._AttackDamage;
	this->_EnergyPoints = obj._EnergyPoints;
	this->_HitPoints = obj._HitPoints;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FRAAAAAAAAAAAAAAAAG OUUUUUUUUT" << std::endl;
}
/*CANONICAL*/

/*METHODS*/
void	FragTrap::highFivesGuys(void)
{
	if (!this->_HitPoints)
		std::cout << "FragTrap " << this->_Name << " has " << this->_HitPoints << " Hit Points left! It can't ask for high five!" << std::endl;
	else if (!this->_EnergyPoints)
		std::cout << "FragTrap " << this->_Name << " has " << this->_EnergyPoints << " Energy Points left! It can't ask gor high five!" << std::endl;
	std::cout << "Give me five m8 uwu ?" << std::endl;
}
/*METHODS*/
