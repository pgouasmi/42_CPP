/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:26:26 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/02 15:26:26 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	std::string s = "HI THIS IS BRAIN";
	std::string	*stringPTR = &s;
	std::string &stringREF = s;

	std::cout << "Memory address of the string variable : " << stringPTR << std::endl;
	std::cout << "Memory address held by stringPTR : " << &(*stringPTR) << std::endl;
	std::cout << "Memory address held by stringREF : " << &stringREF << std::endl;
	std::cout << "Value of the string variable : " << s << std::endl;
	std::cout << "Value pointed to by stringPTR : " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF : " << stringREF << std::endl;
	
}