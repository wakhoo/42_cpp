/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 01:08:27 by chajeon           #+#    #+#             */
/*   Updated: 2025/05/03 13:00:23 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::cout << std::endl;
	Animal	*animals[10];
	int n = -1;
	while (++n < 10) {
		if (n % 2) {
			animals[n] = new Dog();
			((Dog *)animals[n])->brainWash("Snack!!!");
			((Dog *)animals[n])->setIdea(0, "water");
			((Dog *)animals[n])->setIdea(99, "play!!!");
			((Dog *)animals[n])->spyBrain(-1);
			std::cout << std::endl;
			((Dog *)animals[n])->spyBrain(99);
		}
		else {
			animals[n] = new Cat();
			((Cat *)animals[n])->brainWash("Sleep..");
			((Cat *)animals[n])->setIdea(0, "Play!!");
			((Cat *)animals[n])->setIdea(99, "Fight!!");
			((Cat *)animals[n])->spyBrain(-1);
			std::cout << std::endl;
			((Cat *)animals[n])->spyBrain(99);
		}
	}
	for (int i = 0 ; i < 10 ; i++)
		delete animals[i];
	return 0;
}