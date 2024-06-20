/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 13:13:25 by pgouasmi          #+#    #+#             */
/*   Updated: 2023/12/24 13:13:25 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	int nbrOfZombiesToCreate = 10;
	Zombie *array = zombieHorde(nbrOfZombiesToCreate, "Zombar");

	delete[] array;

}