/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 15:02:24 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/03 15:02:24 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

const char *GetOutfileName(char *infile)
{
	std::string infileString;

	infileString.assign(infile);
	infileString += ".replace";
	char result[infileString.length() + 1];
	strcpy(result, infileString.c_str());
	std::cout << result << std::endl;
	return ((const char *)result);
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong input.\nUsage : ./Sed_is_for_losers \"Filename\" \"String1\" \"String2\"" << std ::endl;
		return (1);
	}
	std::ifstream infile;
	infile.open (argv[1], std::ifstream::in);
	if (!infile.is_open())
	{
		std::cout << "Error\nCould not open the file \"" << argv[1] << "\"" << std::endl;
		return (1);
	}
	std::ofstream outfile;
	const char	*OutfileName = GetOutfileName(argv[1]);
	std::cout << OutfileName << std::endl;
	outfile.open(OutfileName, std::ofstream::out /*| std::ofstream::trunc*/);
	free((void *)OutfileName);
	std::string line;
	while (std::getline(infile, line))
	{

	}
	infile.close();
	outfile.close();
	return (0);
}