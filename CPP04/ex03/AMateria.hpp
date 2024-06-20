/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:39:41 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/18 19:29:50 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class ICharacter;
class AMateria
{
protected:
	std::string _type;
public:
	AMateria();
	AMateria(std::string const &type);
	AMateria(const AMateria &obj);
	AMateria &operator=(const AMateria &obj);
	virtual ~AMateria();

	std::string const & getType() const;

	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};


