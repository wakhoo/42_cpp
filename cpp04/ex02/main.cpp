/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 01:08:27 by chajeon           #+#    #+#             */
/*   Updated: 2025/05/03 12:07:50 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

#define TOTAL_AANIMAL 4

int main()
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	// const AAnimal notPossible;
	delete j;
	delete i;
	return 0;
}