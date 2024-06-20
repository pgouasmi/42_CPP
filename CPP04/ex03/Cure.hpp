/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:54:54 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/18 19:14:07 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CURE_HPP
# define CURE_HPP

#include "./AMateria.hpp"

class Cure : public AMateria
{
private:
	/* data */
public:
	Cure();
	Cure(std::string const &type);
	Cure(const Cure &obj);
	Cure &operator=(const Cure &obj);
	virtual ~Cure();

	AMateria *clone() const;
	void	use(ICharacter &target);
};

# endif
