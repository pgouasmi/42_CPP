/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:40:07 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/18 14:20:41 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
private:

protected :
	std::string _type;

public:

	Animal();
	Animal(const Animal &obj);
	virtual ~Animal();
	Animal& operator=(const Animal &obj);

	virtual void makeSound() const;
	virtual std::string getType() const;
};

#endif
