/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 01:12:10 by chajeon           #+#    #+#             */
/*   Updated: 2025/05/03 12:06:25 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
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
