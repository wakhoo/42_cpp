/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 11:51:52 by chajeon           #+#    #+#             */
/*   Updated: 2025/04/28 00:56:11 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap chicken = FragTrap("Coco");
	FragTrap duck = FragTrap();
	FragTrap chickjunior = FragTrap(chicken);
	FragTrap duckjunior;
	duckjunior = duck;

	std::cout << std::endl << std::endl;
	chicken.attack("bird");
	duck.attack("flower");
	duck.beRepaired(10);
	duckjunior.takeDamage(30);
	duckjunior.highFivesGuys();
	duckjunior.beRepaired(15);
	chicken.attack("dog");
	std::cout << std::endl << std::endl;
}