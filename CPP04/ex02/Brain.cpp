/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:44:59 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/18 14:15:40 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Brain.hpp"

Brain::Brain()
{
	// std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &obj)
{
	// std::cout << "Brain copy constructor called" << std::endl;
	*this = obj;
}

Brain &Brain::operator=(const Brain &obj)
{
	// std::cout << "Brain assignment operator called" << std::endl;
	for (size_t i = 0; i < 100; i++)
	{
		if (!obj.getIdea(i).empty())
			this->setIdea(obj.getIdea(i), i);
	}

	return *this;
}

Brain::~Brain()
{
	// std::cout << "Brain Default destructor called" << std::endl;
}

std::string Brain::getIdea(int nb) const
{
	if (nb < 0 || nb > 99)
	{
		std::cout << "Index must be between 0 and 99" << std::endl;
		return NULL;
	}
	return this->_ideas[nb];
}

void	Brain::setIdea(std::string s, int nb)
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
	(this)->_ideas[nb] = s;
}
