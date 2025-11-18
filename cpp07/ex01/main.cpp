/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:58:11 by chajeon           #+#    #+#             */
/*   Updated: 2025/05/09 22:00:37 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	int arr[3] = {8, 39, 100};
	std::string arrs[3] = {"hello", "world", "42"};
	char arrc[3] = {'a', 'b', 'z'};

	iter(arrs, 3, print);
	std::cout << std::endl;
	iter(arr, 3, print);
	std::cout << std::endl;
	iter(arrc, 3, print);
	std::cout << std::endl;
	iter(arrc, 3, toUpper);
	iter(arrc, 3, print);
	std::cout << std::endl;
	return (0);
}