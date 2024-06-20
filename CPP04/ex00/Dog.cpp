/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:44:56 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/17 14:26:49 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
}
Dog::~Dog()
{
	std::cout << "Dog Default destructor called" << std::endl;
}

Dog::Dog(const Dog &obj)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = obj;
}

Dog &Dog::operator=(const Dog &obj)
{
	std::cout << "Dog assignment operator called" << std::endl;
	this->_type = obj.getType();
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Dog : Ouaf" << std::endl;
}
