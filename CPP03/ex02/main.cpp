/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:01:03 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/26 12:15:29 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"
#include "./ScavTrap.hpp"
#include "./FragTrap.hpp"

int	main()
{
	ClapTrap Bot("Machine");
	ScavTrap Scav("Scav");
	FragTrap Frag("Frag");

	Scav.attack("test");
	Bot.attack("mechant");
	Scav.takeDamage(50);
	Scav.beRepaired(20);

	Frag.attack("Bad Guy");

	Bot.takeDamage(6);
	Bot.beRepaired(1);
	Bot.beRepaired(8);
	Bot.attack("mechant");
	Bot.takeDamage(9);
	Bot.beRepaired(100);
	Bot.attack("mechant");

	Bot.beRepaired(100);
	Bot.takeDamage(10000000);
	Bot.attack("mechant");

	Scav.guardGate();
	Frag.highFivesGuys();

	return (0);
}
