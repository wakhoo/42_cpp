/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 15:26:27 by chajeon           #+#    #+#             */
/*   Updated: 2025/05/04 15:35:00 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void)
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
	return (0);
}