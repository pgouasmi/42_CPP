/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:52:46 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/18 14:32:45 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "./Animal.hpp"
#include "./Brain.hpp"

class Cat : public Animal
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
