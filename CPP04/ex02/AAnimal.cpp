/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:42:14 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/17 17:27:24 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./AAnimal.hpp"

AAnimal::AAnimal()
{
	// std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &obj)
{
	// std::cout << "AAnimal copy constructor called" << std::endl;
	*this = obj;
}

AAnimal &AAnimal::operator=(const AAnimal &obj)
{
	// std::cout << "AAnimal assignment operator called" << std::endl;
	this->_type = obj.getType();
	return *this;
}

AAnimal::~AAnimal()
{
	// std::cout << "AAnimal Default destructor called" << std::endl;
}

void	AAnimal::makeSound() const
{
	std::cout << "AAnimal : OUGA BOUGA" << std::endl;
}

std::string AAnimal::getType() const
{
	return this->_type;
}
