/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:25:46 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/14 17:39:11 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fixed.hpp"

Fixed::Fixed()
{
	Number = 0;
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed::Fixed(const int nb)
{
	Number = nb;
}

Fixed::Fixed(const float nb)
{
	Number = nb;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}



Fixed& Fixed::operator=(const Fixed& obj)
{
	std::cout << "Copy assignment called" << std::endl;
	Number = obj.getRawBits();
	return *this;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (Number);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	Number = raw;
}

int		Fixed::toInt() const
{
	std::cout << "Number before = " << Number << std::endl;
	return (Number / 256);
}

float	Fixed::toFloat() const
{
	return (Number * 256);
}


