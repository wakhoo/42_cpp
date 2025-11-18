/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 01:10:48 by chajeon           #+#    #+#             */
/*   Updated: 2025/05/03 11:35:05 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Create a Cat!" << std::endl;
	_brain = new Brain();
	_type = "Cat";
}

Cat::Cat(const Cat& copy)
{
	std::cout << "Copy of Cat!" << std::endl;
	this->_type = copy._type;
	this->_brain = copy._brain;
}

Cat& Cat::operator=(const Cat& copy)
{
	std::cout << "Copy assign of Cat!" << std::endl;
	this->_type = copy._type;
	*this->_brain = *copy._brain;
	return (*this);
}

Cat::~Cat(void)
{
	delete _brain;
	std::cout << this->_type << " went to rest on the tree :D" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "Meow~" << std::endl;
}

void Cat::setIdea(int i, std::string idea)
{
	if ((i >= 0 && i < 100) && !idea.empty())
		_brain->setIdea(i, idea);
	else
		std::cout << "Wrong input" << std::endl;
}

void Cat::brainWash(std::string idea)
{
	if (!idea.empty())
	{
		for (int i = 0; i < 100; i++)
			_brain->setIdea(i, idea);
	}
	else
		std::cout << "Wrong input" << std::endl;
}

void Cat::spyBrain(int i)
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