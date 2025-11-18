/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 15:39:12 by chajeon           #+#    #+#             */
/*   Updated: 2025/05/09 03:23:06 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime> 
#include <cstdlib>

void identify(Base* p);
void identify(Base& p);

int main(void)
{
	Base *base = NULL;
	srand(time(NULL));
	int num = rand() % 3;
	switch (num)
	{
		case 0:
			base = new A;
			break;
		case 1:
			base = new B;
			break;
		case 2:
			base = new C;
			break;
	}
	identify(base);
	identify(*base);
	delete base;
	return (0);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
	{
		std::cout << "A" << std::endl;
	}
	else if (dynamic_cast<B*>(p))
	{
		std::cout << "B" << std::endl;
	}
	else if (dynamic_cast<C*>(p))
	{
		std::cout << "C" << std::endl;
	}
	else
		std::cout << "Non difine" << std::endl;
}

void identify(Base& p)
{
	if (dynamic_cast<A*>(&p))
	{
		std::cout << "A" << std::endl;
	}
	else if (dynamic_cast<B*>(&p))
	{
		std::cout << "B" << std::endl;
	}
	else if (dynamic_cast<C*>(&p))
	{
		std::cout << "C" << std::endl;
	}
	else
		std::cout << "Non difine" << std::endl;
}