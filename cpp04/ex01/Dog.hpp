/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 01:12:10 by chajeon           #+#    #+#             */
/*   Updated: 2025/04/29 16:48:08 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *_brain;
	public:
		Dog(void);
		Dog(const Dog& copy);
		Dog& operator=(const Dog& copy);
		~Dog(void);
		void makeSound(void) const;
		void setIdea(int i, std::string idea);
		void brainWash(std::string idea);
		void spyBrain(int i);
};
