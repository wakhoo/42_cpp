/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 01:09:04 by chajeon           #+#    #+#             */
/*   Updated: 2025/04/29 15:37:58 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal(void);
		Animal(const Animal& copy);
		Animal& operator=(const Animal& copy);
		virtual ~Animal(void);
		virtual void makeSound(void) const;
		std::string getType(void) const;
};
