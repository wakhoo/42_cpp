/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 11:51:52 by chajeon           #+#    #+#             */
/*   Updated: 2025/04/27 23:04:19 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap dog = ClapTrap("Napo");
	ClapTrap cat = ClapTrap();
	ClapTrap copycat = ClapTrap(cat);
	ClapTrap clonedog;
	clonedog = dog;

	dog.attack("bird");
	cat.takeDamage(5);
	cat.beRepaired(10);
	copycat.beRepaired(10);
}