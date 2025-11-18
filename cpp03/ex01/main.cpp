/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 11:51:52 by chajeon           #+#    #+#             */
/*   Updated: 2025/04/28 00:00:55 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap chicken = ScavTrap("Coco");
	ScavTrap duck = ScavTrap();
	ScavTrap chickjunior = ScavTrap(chicken);
	ScavTrap duckjunior;
	duckjunior = duck;

	std::cout << std::endl << std::endl;
	chicken.attack("bird");
	duck.attack("flower");
	duck.beRepaired(10);
	duckjunior.takeDamage(30);
	duckjunior.guardGate();
	duckjunior.guardGate();
	duckjunior.beRepaired(15);
	chicken.attack("dog");
	std::cout << std::endl << std::endl;
}