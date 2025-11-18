/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 01:08:44 by chajeon           #+#    #+#             */
/*   Updated: 2025/04/29 15:48:30 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "I created an Animal!" << std::endl;
	_type = "Animal";
}

Animal::Animal(const Animal& copy)
{
	std::cout << "I copy the Animal!" << std::endl;
	this->_type = copy._type;
}

Animal& Animal::operator=(const Animal& copy)
{
	std::cout << "I copy assigned the Animal!" << std::endl;
	this->_type = copy._type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << this->_type << " went to rest :D" << std::endl;
}

void Animal::makeSound(void) const
{
	std::cout << "Animal has various sound~!" << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->_type);
}
