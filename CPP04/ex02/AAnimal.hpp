/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:40:07 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/17 17:58:56 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
#define AAnimal_HPP

#include <string>
#include <iostream>
#include "Brain.hpp"

class AAnimal
{
private:

protected :
	std::string _type;

public:
	AAnimal();
	AAnimal(const AAnimal &obj);
	virtual ~AAnimal();
	AAnimal& operator=(const AAnimal &obj);

	virtual void makeSound() const = 0;
	virtual std::string getType() const;
};

#endif
