/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:43:10 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/26 12:06:55 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	int max;
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap &obj);
	FragTrap &operator=(FragTrap &obj);
	~FragTrap();

	void	highFivesGuys(void);
};
