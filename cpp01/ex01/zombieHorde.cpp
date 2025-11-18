/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 00:38:55 by chajeon           #+#    #+#             */
/*   Updated: 2025/04/08 02:54:08 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *nZombie = new Zombie[N];
	std::stringstream numb;
	for (int i = 0; i < N ; i++)
	{
		numb.str(std::string());
		numb << i;
		nZombie[i].giveName(name + numb.str());
	}
	return (nZombie);
}