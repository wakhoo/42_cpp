/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 01:09:04 by chajeon           #+#    #+#             */
/*   Updated: 2025/05/03 12:05:38 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class AAnimal
{
	protected:
		std::string _type;
	public:
		AAnimal(void);
		AAnimal(const AAnimal& copy);
		AAnimal& operator=(const AAnimal& copy);
		virtual ~AAnimal(void);
		virtual void makeSound(void) const = 0;
		std::string getType(void) const;
};
