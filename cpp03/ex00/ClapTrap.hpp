/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 11:49:01 by chajeon           #+#    #+#             */
/*   Updated: 2025/04/27 21:29:17 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string Name;
		int	HitPoint;
		int EnergyPoint;
		int AttackDamage;

	public:
		ClapTrap(void);
		ClapTrap(std::string Name);
		ClapTrap(const ClapTrap& copy);
		ClapTrap&	operator=(const ClapTrap& copy);
		~ClapTrap(void);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif