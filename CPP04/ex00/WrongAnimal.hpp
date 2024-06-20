/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:49:33 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/17 14:38:42 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
private:
	/* data */

protected :
	std::string _type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &obj);
	virtual ~WrongAnimal();
	WrongAnimal &operator=(const WrongAnimal &obj);
	virtual void makeSound() const;
	virtual std::string getType() const;
};

#endif
