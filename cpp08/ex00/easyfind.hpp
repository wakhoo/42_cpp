/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 21:54:45 by chajeon           #+#    #+#             */
/*   Updated: 2025/06/02 11:25:15 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>

class NotFound : public std::exception
{
	const char *what() const throw()
	{
		return ("Value not found");
	}
};

template <typename T>
int easyfind(const T &contain, int b)
{
	typename T::const_iterator res;

	res = std::find(contain.begin(), contain.end(), b);
	if (res == contain.end())
		throw NotFound();
	return (*res);
}
