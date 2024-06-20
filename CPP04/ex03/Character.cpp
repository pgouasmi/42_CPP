/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:39:40 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/18 19:54:47 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string &name)
{
	this->_name = name;
	for (size_t i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	
}

Character::Character(Character const &obj)
{
	for (size_t i = 0; i < 4; i++)
		delete (this->_inventory[i]);
	
	*this = obj;
}

Character &Character::operator=(const Character &obj)
{
	this->_name = obj.getName();
	for (size_t i = 0; i < 4; i++)
		this->_inventory[0] = obj._inventory[0];
	return *this;
}

Character::~Character()
{

}

void Character::equip(AMateria *m)
{
	size_t i = 0;
	while (i < 4 && this->_inventory[i])
		i++;
	if (i == 3 && this->_inventory[i])
		std::cout << "Materia inventory is full" << std::endl;
	else
		this->_inventory[i] = m;
}

void Character::unequip(int idx)
{
	this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	this->_inventory[idx]->use(target);
}

std::string const &Character::getName() const
{
	return this->_name;
}

