/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 21:54:42 by chajeon           #+#    #+#             */
/*   Updated: 2025/06/02 11:59:09 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main (void)
{
	std::vector<int> arr;
	arr.push_back(10);
	arr.push_back(1);
	arr.push_back(4);
	arr.push_back(87);
	arr.push_back(7);
	arr.push_back(54);
	arr.push_back(2);
	arr.push_back(55);
	arr.push_back(98);

	try
	{
		int index2 = easyfind(arr, 7);
		std::cout << index2 << std::endl;
		int index = easyfind(arr, -1);
		std::cout << index << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "[Exception] " << e.what() << std::endl;
	}
	return (0);
}