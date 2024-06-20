/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:05:19 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/18 19:07:29 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure()
{
	this->_type = "cure";
}

Cure::Cure(std::string const &type) : AMateria(type)
{
	this->_type = type;
}

Cure::Cure(const Cure &obj) : AMateria(obj)
{
	*this = obj;
}

Cure &Cure::operator=(const Cure &obj)
{
	this->_type = obj.getType();
	return *this;
}

Cure::~Cure()
{

}

AMateria *Cure::clone() const
{
	Cure *res = new Cure("Cure");
	// *res = *this;
	return res;
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}


