/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:01:05 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/17 14:27:50 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cat.hpp"

Cat::Cat()
{
	std::cout << "Default Cat constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Default Cat destrucor called" << std::endl;
}

Cat::Cat(const Cat &obj)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = obj;
}

Cat &Cat::operator=(const Cat &obj)
{
	std::cout << "Cat assignment operator called" << std::endl;
	this->_type = obj.getType();
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Cat : meow" << std::endl;
}
