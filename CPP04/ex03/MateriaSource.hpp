/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 22:03:22 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/18 22:03:22 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *_source[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource &obj);
	MateriaSource &operator=(const MateriaSource &obj);
	~MateriaSource();

	void learnMateria(AMateria *m);
	AMateria *createMateria(std::string const &type);
};

#endif