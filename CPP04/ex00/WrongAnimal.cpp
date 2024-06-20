/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:51:35 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/17 15:31:11 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Default destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = obj;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	this->_type = obj.getType();
	return *this;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Photosynthesis" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->_type;
}
