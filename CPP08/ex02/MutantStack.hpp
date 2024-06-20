//
// Created by pgouasmi on 2/15/24.
//

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <algorithm>
#include <iterator>
#include <iostream>

template <typename T, typename container=std::deque<T> >
class MutantStack : public std::stack<T> {
public:

	MutantStack() {}
	MutantStack(const MutantStack<T> &obj)
	{
		*this = obj;
	}
	MutantStack<T> &operator=(const MutantStack<T> &obj)
	{
		(void) obj;
		return *this;
	}
	~MutantStack() {}
	typedef typename container::iterator iterator;
	iterator begin()
	{
		return this->c.begin();
	}
	iterator end()
	{
		return this->c.end();
	}
};



#endif


