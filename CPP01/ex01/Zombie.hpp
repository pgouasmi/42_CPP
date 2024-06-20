/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 12:57:03 by pgouasmi          #+#    #+#             */
/*   Updated: 2023/12/24 12:57:03 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <sstream>

class Zombie
{
private:
	std::string name;

public:
	Zombie();
	Zombie(std::string newName);
	~Zombie();
	void	announce();
};

Zombie *newZombie(std::string name);
void	randomChump(std::string name);
Zombie* zombieHorde( int N, std::string name );

#endif