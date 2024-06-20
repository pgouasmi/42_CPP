//
// Created by pgouasmi on 2/7/24.
//

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <list>
#include <vector>
#include <algorithm>
#include <iostream>

template<typename T>
bool easyfind(T container, int tofind)
{
	return (std::find(container.begin(), container.end(), tofind) != container.end());
}

#endif
