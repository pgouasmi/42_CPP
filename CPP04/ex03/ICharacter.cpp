/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:38:32 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/18 19:48:44 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ICharacter.hpp"

ICharacter::~ICharacter()
{

}

std::string const & ICharacter::getName() const
{
	return this->_name;
}
