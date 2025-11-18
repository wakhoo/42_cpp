/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 23:05:39 by chajeon           #+#    #+#             */
/*   Updated: 2025/04/27 23:55:45 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->gatemode = false;
	this->Name = "soname";
	this->HitPoint = 100;
	this->AttackDamage = 20;
	this->EnergyPoint = 50;
	std::cout << this->Name << " is created without name on ScavTrap! :D" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->gatemode = false;
	this->Name = name;
	this->HitPoint = 100;
	this->AttackDamage = 20;
	this->EnergyPoint = 50;
	std::cout << this->Name << " is created with name on ScavTrap! :D" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
	this->gatemode = copy.gatemode;
	this->Name = copy.Name;
	this->HitPoint = copy.HitPoint;
	this->AttackDamage = copy.AttackDamage;
	this->EnergyPoint = copy.EnergyPoint;
	std::cout << this->Name << " is copied on ScavTrap! :D" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
{
	this->gatemode = copy.gatemode;
	this->Name = copy.Name;
	this->HitPoint = copy.HitPoint;
	this->AttackDamage = copy.AttackDamage;
	this->EnergyPoint = copy.EnergyPoint;
	std::cout << this->Name << " is copy assigned on ScavTrap! :D" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << this->Name << " has gone by destructor on ScavTrap! XD" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->EnergyPoint <= 0)
		std::cout << "Not able to acctack no more energy XD ScavTrap" << std::endl;
	else if (this->HitPoint <= 0)
		std::cout << "Not able to your already DEAD!! XD ScavTrap" << std::endl;
	else
	{
		this->EnergyPoint--;
		std::cout << "ScavTrap " << this->Name << " attacks "<< target << ", causing "<< this->AttackDamage << " points of damage!" << std::endl;
	}
}

void ScavTrap::guardGate()
{
	gatemode = !gatemode;
	if (gatemode)
		std::cout << "ScapTrap is on the guard gate mode!!" << std::endl;
	else
		std::cout << "ScapTrap off the guard gate mode!!" << std::endl;
}
