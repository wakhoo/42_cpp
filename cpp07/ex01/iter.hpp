/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:58:01 by chajeon           #+#    #+#             */
/*   Updated: 2025/05/09 21:59:48 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T>
void iter(T *array, size_t len, void (*fn)(T&))
{
	for (size_t i = 0; i < len; i++)
	{
		fn(array[i]);
	}
}

template<typename T>
void print(T& input)
{
	std::cout << input << ", ";
}

template<typename T>
void toUpper(T& input)
{
	if (input >= 'a' && input <= 'z')
		input = input - 32;
}