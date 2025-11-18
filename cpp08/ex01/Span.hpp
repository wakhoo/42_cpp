/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 21:59:53 by chajeon           #+#    #+#             */
/*   Updated: 2025/05/27 14:32:02 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <set>
#include <ctime>
#include <cstdlib>

class Span
{
	private:
		unsigned int _N;
		std::multiset<int> _contain;
	public:
		Span(void);
		Span(unsigned int n);
		Span(const Span & copy);
		Span& operator=(const Span & copy);
		~Span(void);
		void addNumber(int n);
		void fillNumber(unsigned int n);
		int shortestSpan(void);
		int longestSpan(void);
		class TooManyNums : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class TooFewNums : public std::exception
		{
			public:
				const char* what() const throw();
		};
};