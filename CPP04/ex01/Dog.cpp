/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:44:56 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/18 14:33:09 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Dog.hpp"

Dog::Dog()
{
	// std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}
Dog::~Dog()
{
	// std::cout << "Dog Default destructor called" << std::endl;
	delete this->_brain;
}

Dog::Dog(const Dog &obj)
{
	// std::cout << "Dog copy constructor called" << std::endl;
	this->_brain = new Brain();
	*this = obj;
}

Dog &Dog::operator=(const Dog &obj)
{
	std::cout << "Dog assignment operator called" << std::endl;
	this->_type = obj.getType();
	this->_brain = obj._brain;
	return *this;
}

void Dog::setDogIdea(std::string s, int nb)
{
	if (s.empty())
	{
		std::cout << "The string must not be empty" << std::endl;
		return ;
	}
	if (nb < 0 || nb > 99)
	{
		std::cout << "Index must be between 0 and 99" << std::endl;
		return ;
	}
	this->_brain->setIdea(s, nb);
}

std::string	Dog::getDogIdea(int nb)
{
		if (nb < 0 || nb > 99)
	{
		std::cout << "Index must be between 0 and 99" << std::endl;
		return NULL;
	}
	return this->_brain->getIdea(nb);
}

void	Dog::makeSound() const
{
	std::cout << "Dog : Ouaf" << std::endl;
}
