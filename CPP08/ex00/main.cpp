/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:54:49 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/02/07 16:54:49 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	int tofind = 8;

	std::list<int> lst;
	lst.push_back(1);
	lst.push_back(8);
	lst.push_back(5634);
	lst.push_back(456);
	lst.push_back(4);

	std::cout << "in LST, find " << tofind << ": ";
	if (::easyfind(lst, tofind))
		std::cout << "OK" << std::endl;
	else
		std::cout << "NOK" << std::endl;

	std::vector<int> vect;

	vect.push_back(10);
	vect.push_back(20);
	vect.push_back(30);
	vect.push_back(40);

	std::cout << "in VECT, find " << tofind << ": ";
	if (::easyfind(vect, tofind))
		std::cout << "OK" << std::endl;
	else
		std::cout << "NOK" << std::endl;




}