/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:49:00 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/17 15:29:59 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Default WrongCat constructor called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "Default WrongCat destrucor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = obj;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
	std::cout << "WrongCat assignment operator called" << std::endl;
	this->_type = obj.getType();
	return *this;
}

// void	WrongCat::makeSound() const
// {
// 	std::cout << "WrongCat : Photosynthesis" << std::endl;
// }
