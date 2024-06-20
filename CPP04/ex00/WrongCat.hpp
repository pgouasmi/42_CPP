/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:49:03 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/17 15:30:37 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "./WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
	/* data */
protected:
	// void makeSound() const;
public:
	WrongCat();
	WrongCat(const WrongCat &obj);
	~WrongCat();
	WrongCat &operator=(const WrongCat &obj);
};


#endif
