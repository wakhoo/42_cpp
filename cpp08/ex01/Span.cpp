/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 21:59:50 by chajeon           #+#    #+#             */
/*   Updated: 2025/05/27 16:41:08 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _N(0)
{

}

Span::Span(unsigned int n) : _N(n)
{

}

Span::Span(const Span & copy) : _N(copy._N), _contain(copy._contain)
{
   
}

Span& Span::operator=(const Span & copy)
{
    this->_N = copy._N;
	this->_contain = copy._contain;
    return (*this);
}

Span::~Span(void)
{

}

void Span::addNumber(int n)
{
	if (_contain.size() >= _N)
		throw Span::TooManyNums();
    _contain.insert(n);
}

void Span::fillNumber(unsigned int n)
{
	srand(time(NULL));
	for (unsigned int i = 0; i < n; i++)
		addNumber(rand());
}

int Span::shortestSpan(void)
{
    if (_contain.size() <= 1)
	{
        throw Span::TooFewNums();
	}
	std::multiset<int>::iterator it = _contain.begin();
	std::multiset<int>::iterator tep = it;
	tep++;
	int span = *tep - *it;
	for (int i = 0; i < (int)_contain.size(); i++)
	{
		
		if (tep == _contain.end())
			break;
		else
		{
			if (span > (*tep - *it))
				span = (*tep - *it);
		}
		tep++;
		it++;
	}
    return (span);
}

int Span::longestSpan(void)
{
    if (_contain.size() <= 1)
	{
        throw Span::TooFewNums();
	}
    return ((*(((--_contain.end()))) - (*_contain.begin())));
}

const char *Span::TooFewNums::what() const throw()
{
	return ("Too few number to check span.");
}

const char *Span::TooManyNums::what() const throw()
{
	return ("Too many numbers to add.");
}