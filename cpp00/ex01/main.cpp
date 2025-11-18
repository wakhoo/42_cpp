/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 00:28:58 by chajeon           #+#    #+#             */
/*   Updated: 2025/04/01 15:29:31 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(int argc, char **argv)
{
	int	end = 0;
	std::string command;
	PhoneBook pb;
	(void)argv;
	if (argc != 1)
	{
		std::cout << "Just type ./phoneBook" << std::endl;
		return (1);
	}
	while (!end)
	{
		std::cout << "Enter Command: ";
		if(!std::getline(std::cin, command))
			break;
		if (!command.compare("ADD"))
			pb.addContact();
		else if (!command.compare("SEARCH"))
		{
			if (pb.searchContact())
				continue ;
		}
		else if (!command.compare("EXIT"))
			end = 1;
		else
			continue ;
	}
	return (0);
}