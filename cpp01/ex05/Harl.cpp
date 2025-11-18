/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 00:38:21 by chajeon           #+#    #+#             */
/*   Updated: 2025/04/11 07:15:04 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put";
	std::cout << " enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for";
	std::cout << " years, whereas you started working here just last month." << std::endl;
}

void Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl( void )
{
	std::cout << "start Harl!!" << std::endl;
}

Harl::~Harl( void )
{
	std::cout << "end Harl :D" << std::endl;
}

void Harl::complain( std::string level )
{
	std::string commands[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	func_p funcs[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4 ; i++)
	{
		if (level == commands[i])
		{
			(this->*funcs[i])();
			return ;
		}
	}
	std::cout << "Invalid command" << std::endl;
}