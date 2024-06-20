/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:28:43 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/26 15:41:52 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP


#include <string>

class ClapTrap
{
private:

protected:
	std::string _Name;
	int			_HitPoints;
	int			_EnergyPoints;
	int			_AttackDamage;
	int			max;

private:
	void		setHitPoints(int nb);

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap &obj);
	~ClapTrap();
	ClapTrap&	operator=(const ClapTrap &obj);

	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void 		beRepaired(unsigned int amount);

	void		setEnergyPoints(int nb);

};

#endif
