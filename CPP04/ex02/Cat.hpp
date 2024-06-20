/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:52:46 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/18 12:12:08 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "./AAnimal.hpp"
#include "./Brain.hpp"

class Cat : public AAnimal
{
private:
	Brain *_brain;

protected :
	void makeSound() const;
public:
	Cat();
	Cat(const Cat &obj);
	~Cat();
	Cat &operator=(const Cat &obj);

	void		setCatIdea(std::string s, int nb);
	std::string	getCatIdea(int nb);
};

#endif
