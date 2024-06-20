/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 14:15:03 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/02 14:15:03 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*horde = new Zombie[N];
	for (int i = 0; i < N; ++i)
	{
		std::stringstream ss;
		ss << i + 1;
		horde[i] = Zombie(name + ss.str());
		horde[i].announce();
	}
	return (horde);
}