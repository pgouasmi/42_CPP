/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:43:38 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/17 14:32:07 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "./Animal.hpp"

class Dog : public Animal
{
private:
protected :
	void makeSound() const;
public:
	Dog();
	Dog(const Dog &obj);
	~Dog();
	Dog &operator=(const Dog &obj);
};

#endif
