/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 01:08:44 by chajeon           #+#    #+#             */
/*   Updated: 2025/04/29 15:48:30 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << "I created an AAnimal!" << std::endl;
	_type = "AAnimal";
}

AAnimal::AAnimal(const AAnimal& copy)
{
	std::cout << "I copy the AAnimal!" << std::endl;
	this->_type = copy._type;
}

AAnimal& AAnimal::operator=(const AAnimal& copy)
{
	std::cout << "I copy assigned the AAnimal!" << std::endl;
	this->_type = copy._type;
	return (*this);
}

AAnimal::~AAnimal(void)
{
	std::cout << this->_type << " went to rest :D" << std::endl;
}

void AAnimal::makeSound(void) const
{
	std::cout << "AAnimal has various sound~!" << std::endl;
}

std::string AAnimal::getType(void) const
{
	return (this->_type);
}
