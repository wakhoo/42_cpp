/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 22:32:58 by chajeon           #+#    #+#             */
/*   Updated: 2025/06/02 11:39:27 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <deque>
#include <list>

template <typename T, class container=std::deque<T> >
class MutantStack : public std::stack<T>
{
	public:
		MutantStack()
		{
			
		}
		MutantStack(const MutantStack& copy)
		{
			*this = copy;
		}
		~MutantStack()
		{
			
		}
		const MutantStack & operator=(const MutantStack& copy)
		{
			*this = copy;
			return (*this);
		}
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