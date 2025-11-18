/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:57:22 by chajeon           #+#    #+#             */
/*   Updated: 2025/05/07 17:01:10 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void swap(T a, T b)
{
	T tmp = a;

	a = b;
	b = tmp;
}

template <typename T> 
T min(T a, T b)
{
	if (a >= b)
		return (b);
	return(a);
}

template <typename T> 
T max(T a, T b)
{
	if (a > b)
		return (a);
	return(b);
}