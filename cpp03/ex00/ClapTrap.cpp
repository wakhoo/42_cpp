/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 11:49:06 by chajeon           #+#    #+#             */
/*   Updated: 2025/04/27 21:29:35 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	this->Name = "noname";
	this->HitPoint = 10;
	this->AttackDamage = 0;
	this->EnergyPoint = 10;
	std::cout << this->Name << " is created without name! :D" << std::endl;
}

ClapTrap::ClapTrap(std::string Name)
{
	this->Name = Name;
	this->HitPoint = 10;
	this->AttackDamage = 0;
	this->EnergyPoint = 10;
	std::cout << this->Name << " is created with the name! :D" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	this->Name = copy.Name;
	this->HitPoint = copy.HitPoint;
	this->AttackDamage = copy.AttackDamage;
	this->EnergyPoint = copy.EnergyPoint;
	std::cout << this->Name << " is copied! :D" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& copy)
{
	this->Name = copy.Name;
	this->HitPoint = copy.HitPoint;
	this->AttackDamage = copy.AttackDamage;
	this->EnergyPoint = copy.EnergyPoint;
	std::cout << this->Name << " is copy assigned! :D" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << this->Name << " has gone by destructor! XD" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->EnergyPoint <= 0)
		std::cout << "Not able to acctack no more energy XD" << std::endl;
	else if (this->HitPoint <= 0)
		std::cout << "Not able to your already DEAD!! XD" << std::endl;
	else
	{
		this->EnergyPoint--;
		std::cout << "ClapTrap " << this->Name << " attacks "<< target << ", causing "<< this->AttackDamage << " points of damage!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->HitPoint <= 0 || this->EnergyPoint <= 0)
	{
		std::cout << " We can't hit anymore!!" <<std::endl;
		return ;
	}
	else
	{
		this->EnergyPoint--;
		this->HitPoint -= amount;
		if (this->HitPoint <= 0)
			std::cout << this->Name << " is dead XD" << std::endl;
		else
			std::cout << this->Name << " has been attacked!! XD left Hit Point:" << this->HitPoint << std::endl;;
	}
	
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->EnergyPoint <= 0 || this->HitPoint <= 0)
	{
		std::cout << "We can't repair any more." << std::endl;
	}
	else
	{
		this->EnergyPoint--;
		std::cout << this->Name << "'s hit point is repaired from " << this->HitPoint <<" to ";
		this->HitPoint += amount;
		std::cout << this->HitPoint << " :D" << std::endl;
	}
}