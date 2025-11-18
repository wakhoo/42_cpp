/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 15:26:27 by chajeon           #+#    #+#             */
/*   Updated: 2025/05/06 15:10:24 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main (void)
{
	{
		try
		{
			Bureaucrat coco("CoCo", 120);
			std::cout << coco << std::endl;
			coco.decreaseGrade();
			coco.decreaseGrade();
			std::cout << coco << std::endl;
			Bureaucrat kiki("KiKi", 150);
			std::cout << kiki << std::endl;
			kiki.decreaseGrade();
			std::cout << kiki << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "[EXCEPTION] " << e.what() << std::endl;
		}
	}
	{
		try
		{
			Bureaucrat coco("CoCo", 41);
			std::cout << coco << std::endl;
			Form fofo("fofo", 39, 42);
			Form dodo;
			std::cout << fofo;
			coco.increaseGrade();
			std::cout << coco << std::endl;
			coco.signForm(fofo);
			std::cout << fofo;
			dodo = fofo;
			std::cout << dodo;
			coco.signForm(fofo);
		}
		catch (std::exception & e)
		{
			std::cout << "[Exception] " << e.what() << std::endl;
		}
	}
	return (0);
}