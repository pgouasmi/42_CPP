/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:52:46 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/17 14:31:53 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "./Animal.hpp"

class Cat : public Animal
{
private:
	/* data */
protected :
	void makeSound() const;
public:
	Cat();
	Cat(const Cat &obj);
	~Cat();
	Cat &operator=(const Cat &obj);
};

#endif
