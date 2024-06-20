/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:41:52 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/18 12:27:32 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
protected:
	std::string _ideas[100];
public:
	Brain();
	Brain(const Brain &obj);
	~Brain();
	Brain& operator=(const Brain &obj);

	std::string getIdea(int nb) const;
	void		setIdea(std::string s, int nb);
};

#endif
