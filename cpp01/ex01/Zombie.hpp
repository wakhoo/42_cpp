/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 00:39:06 by chajeon           #+#    #+#             */
/*   Updated: 2025/04/08 02:51:10 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <sstream>

class Zombie{
	private:
		std::string	name;

	public:
		Zombie();
		~Zombie();
		void	announce( void );
		void	giveName( std::string name );
};

Zombie* zombieHorde( int N, std::string name );

#endif