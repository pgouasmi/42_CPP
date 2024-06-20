/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:18:12 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/18 14:03:54 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./AAnimal.hpp"
#include "./Dog.hpp"
#include "./Cat.hpp"

int main()
{
	{
	AAnimal *arr[10];

	for (size_t i = 0; i < 5; i++)
		arr[i] = new Dog();
	for (size_t j = 5; j < 10; j++)
		arr[j] = new Cat();


	for (size_t k = 0; k < 10; k++)
		delete arr[k];
	}
	std::cout << std::endl;
	{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	delete j;
	delete i;
	}

	{
		Cat *a = new Cat();
		a->setCatIdea("LOL", 0);
		Cat *b = new Cat(*a);
		// *b = *a;
		delete a;
		std::cout << b->getType() << std::endl;
		std::cout << b->getCatIdea(0) << std::endl;
		delete b;
	}

	{
		// Dog *A = new Dog();

		// A->setDogIdea("BONE", 1);
		// Dog *B = new Dog(*A);
		// delete A;
		// std::cout << B->getDogIdea(1) << std::endl;

		// delete B;

	}

	//  AAnimal *test = new AAnimal;

}
