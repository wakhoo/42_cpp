/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 00:39:10 by chajeon           #+#    #+#             */
/*   Updated: 2025/04/08 02:28:42 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	randomChump("stack zombie");
	Zombie fooZombie("Foo");
	fooZombie.announce();
	Zombie	*heapZombie = newZombie("heap zombie");
	heapZombie->announce();
	delete heapZombie;
	return (0);
}
