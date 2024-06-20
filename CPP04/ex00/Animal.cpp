/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:42:14 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/17 14:27:13 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &obj)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = obj;
}

Animal &Animal::operator=(const Animal &obj)
{
	std::cout << "Animal assignment operator called" << std::endl;
	this->_type = obj.getType();
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal Default destructor called" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "Animal : OUGA BOUGA" << std::endl;
}

std::string Animal::getType() const
{
	return this->_type;
}
