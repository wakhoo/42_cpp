/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 01:11:00 by chajeon           #+#    #+#             */
/*   Updated: 2025/05/03 12:06:16 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
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
