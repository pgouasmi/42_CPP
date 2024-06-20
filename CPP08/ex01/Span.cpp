//
// Created by pgouasmi on 2/14/24.
//

#include "Span.hpp"

Span::Span(unsigned int n) : _max(n) {}

Span::Span(Span &obj) : _max(obj._max)
{
	*this = obj;
}

Span &Span::operator=(Span &obj)
{
	this->_lst = obj._lst;
	return *this;
}

Span::~Span()
{
}

void Span::addNumber(int toAdd)
{
	if (this->_lst.size() == this->_max)
		throw AlreadyFullException();
	this->_lst.push_back(toAdd);
}

//template <typename T>
//void Span::addNumberIterators(T start, T end)
//{
//	T it = start;
//	while (it != end)
//	{
//		if (this->_lst.size() == _max)
//			throw AlreadyFullException();
//		this->_lst.push_back(*it);
//		it++;
//	}
//}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	std::vector<int>::iterator it = begin;

	while (it != end) {
		this->addNumber(*it);
		it++;
	}
}

size_t Span::longestSpan()
{
	if (this->_lst.size() < 2)
		throw ListTooSmallException();
	this->_lst.sort(std::less<int>());
//	std::cout << "smallest = " << *(this->_lst.begin()) << " largest: " << *(--this->_lst.end()) << std::endl;
	return (*(--this->_lst.end()) - *(this->_lst.begin()));
}

size_t Span::shortestSpan()
{

	if (this->_lst.size() < 2)
		throw ListTooSmallException();
	size_t min = LONG_LONG_MAX;

	this->_lst.sort();
	for (std::list<int>::iterator i = this->_lst.begin(); i  != this->_lst.end(); ++i)
	{

		std::list<int>::iterator next = i;
		next++;
		if (next != this->_lst.end()) {
			size_t diff = *next - *i;
			if (diff < min)
				min = diff;
		}
	}
	return min;
}

