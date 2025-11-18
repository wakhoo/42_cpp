/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 01:12:00 by chajeon           #+#    #+#             */
/*   Updated: 2025/05/03 11:35:12 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Create a Dog!" << std::endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const Dog& copy)
{
	std::cout << "Copy of Dog!" << std::endl;
	this->_type = copy._type;
	this->_brain = copy._brain;
}

Dog& Dog::operator=(const Dog& copy)
{
	std::cout << "Copy assign of Dog!" << std::endl;
	this->_type = copy._type;
	*this->_brain = *copy._brain;
	return (*this);
}

Dog::~Dog(void)
{
	delete _brain;
	std::cout << this->_type << " went to rest to Doggy house :D" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "Woff! Woff!" << std::endl;
}

void Dog::setIdea(int i, std::string idea)
{
	if ((i >= 0 && i < 100) && !idea.empty())
		_brain->setIdea(i, idea);
	else
		std::cout << "Wrong input" << std::endl;
}

void Dog::brainWash(std::string idea)
{
	if (!idea.empty())
	{
		for (int i = 0; i < 100; i++)
			_brain->setIdea(i, idea);
	}
	else
		std::cout << "Wrong input" << std::endl;
}

void Dog::spyBrain(int i)
{
	if (i == -1)
	{
		for (int i = 0 ; i < 100 ; i++)
			std::cout << _brain->getIdea(i) << " ,";
		std::cout << std::endl;
	}
	else
		std::cout << _brain->getIdea(i) << std::endl;
}