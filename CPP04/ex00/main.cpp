/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:18:12 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/17 14:38:29 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal.hpp"
#include "./Dog.hpp"
#include "./Cat.hpp"
#include "./WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	const Animal* lol = new Cat();
	std::cout << lol->getType() <<std::endl;
	lol->makeSound();

	// const Cat* test = new Animal();
	// std::cout << test->getType() << std::endl;
	// test->makeSound();

	const WrongAnimal* wrong = new WrongCat();
	wrong->makeSound();

	Animal bruh(*meta);
	bruh.makeSound();

	delete meta;
	delete i;
	delete j;
	delete lol;
	delete wrong;
}
