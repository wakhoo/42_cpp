/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 01:11:00 by chajeon           #+#    #+#             */
/*   Updated: 2025/04/29 16:55:54 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *_brain;
	public:
		Cat(void);
		Cat(const Cat& copy);
		Cat& operator=(const Cat& copy);
		~Cat(void);
		void makeSound(void) const;
		void setIdea(int i, std::string idea);
		void brainWash(std::string idea);
		void spyBrain(int i);
};
