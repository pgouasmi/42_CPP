/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:43:38 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/18 13:45:41 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "./AAnimal.hpp"
#include "./Brain.hpp"

class Dog : public AAnimal
{
private:
	Brain *_brain;
protected :
	void makeSound() const;
public:
	Dog();
	Dog(const Dog &obj);
	~Dog();
	Dog &operator=(const Dog &obj);

	void		setDogIdea(std::string s, int nb);
	std::string	getDogIdea(int nb);
};

#endif
