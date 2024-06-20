/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:17:16 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/18 19:51:48 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string _name;
	AMateria *_inventory[4];
public:
	Character(std::string const &name);
	Character(Character const &obj);
	Character &operator=(const Character &obj);
	~Character();

	std::string const& getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};

