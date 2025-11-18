/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 15:37:43 by chajeon           #+#    #+#             */
/*   Updated: 2025/05/12 12:06:30 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
	Data a;
	a.a = 10;
	a.b = 20.8;

	std::cout << a.a << "|" << a.b << std::endl;
	long int test = Serializer::serialize(&a);
	std::cout << test << std::endl;
	Data *b = Serializer::deserialize(test);
	std::cout << b->a << "|" << b->b << std::endl;
}