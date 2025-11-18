/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 01:22:38 by chajeon           #+#    #+#             */
/*   Updated: 2025/04/29 15:50:59 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "I created an WrongAnimal!" << std::endl;
	_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	std::cout << "I copy the WrongAnimal!" << std::endl;
	this->_type = copy._type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy)
{
	std::cout << "I copy assigned the WrongAnimal!" << std::endl;
	this->_type = copy._type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << this->_type << " went to wrong XD" << std::endl;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal has wrong sound~!" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (this->_type);
}