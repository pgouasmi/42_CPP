//
// Created by pgouasmi on 2/14/24.
//

#ifndef SPAN_HPP
#define SPAN_HPP

#include <list>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
#include <cstdlib>
#include <ctime>

class Span
		{
private:
	const unsigned int _max;
	std::list<int> _lst;
	Span();
public:
	Span(unsigned int n);
	Span(Span& obj);
	Span &operator=(Span &obj);
	~Span();

	void addNumber(int toAdd);

//	template <typename T>
//	void addNumberIterators(T start, T end);

	void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);


	size_t shortestSpan();
	size_t longestSpan();

	class AlreadyFullException : public std::exception
			{
	public:
		virtual const char *what() const throw() { return ("List is already full"); };
	};

		class ListTooSmallException : public std::exception
	{
		public:
		virtual const char *what() const throw() { return ("List is too small to calculate span"); };
	};
};


#endif
