/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:01:05 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/18 14:17:25 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cat.hpp"

Cat::Cat()
{
	// std::cout << "Default Cat constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::~Cat()
{
	// std::cout << "Default Cat destrucor called" << std::endl;
	delete this->_brain;
}

Cat::Cat(const Cat &obj)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_brain = new Brain();
	*this = obj;
}

Cat &Cat::operator=(const Cat &obj)
{
	std::cout << "Cat assignment operator called" << std::endl;
	this->_type = obj._type;
	*this->_brain = *(obj._brain);
	return *this;
}

void Cat::setCatIdea(std::string s, int nb)
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

std::string	Cat::getCatIdea(int nb)
{
		if (nb < 0 || nb > 99)
	{
		std::cout << "Index must be between 0 and 99" << std::endl;
		return NULL;
	}
	return this->_brain->getIdea(nb);
}

void Cat::makeSound() const
{
	std::cout << "Cat : meow" << std::endl;
}
