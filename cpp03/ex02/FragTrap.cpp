/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 00:03:42 by chajeon           #+#    #+#             */
/*   Updated: 2025/04/28 00:55:24 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	this->Name = "Foname";
	this->HitPoint = 100;
	this->AttackDamage = 30;
	this->EnergyPoint = 100;
	std::cout << this->Name << " is created without name on FragTrap! :D" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->Name = name;
	this->HitPoint = 100;
	this->AttackDamage = 30;
	this->EnergyPoint = 100;
	std::cout << this->Name << " is created with name on FragTrap! :D" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
	this->Name = copy.Name;
	this->HitPoint = copy.HitPoint;
	this->AttackDamage = copy.AttackDamage;
	this->EnergyPoint = copy.EnergyPoint;
	std::cout << this->Name << " is copied on FragTrap! :D" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& copy)
{
	this->Name = copy.Name;
	this->HitPoint = copy.HitPoint;
	this->AttackDamage = copy.AttackDamage;
	this->EnergyPoint = copy.EnergyPoint;
	std::cout << this->Name << " is copy assigned on FragTrap! :D" << std::endl;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << this->Name << " has gone by destructor on FragTrap! XD" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << this->Name << " makes a high five!! YEAH!!" << std::endl;
}
