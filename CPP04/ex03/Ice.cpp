/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:52:13 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/18 19:07:26 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Ice.hpp"
#include "ICharacter.hpp"


Ice::Ice()
{
	this->_type = "ice";
}

Ice::Ice(std::string const &type) : AMateria(type)
{
	this->_type = type;
}

Ice::Ice(const Ice &obj) : AMateria(obj)
{
	*this = obj;
}

Ice &Ice::operator=(const Ice &obj)
{
	this->_type = obj.getType();
	return *this;
}

Ice::~Ice()
{

}

AMateria *Ice::clone() const
{
	Ice *res = new Ice("ice");
	// *res = *this;
	return res;
}

void Ice::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
