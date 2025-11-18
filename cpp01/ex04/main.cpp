/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 00:38:27 by chajeon           #+#    #+#             */
/*   Updated: 2025/04/18 16:21:54 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

bool checkInput(char *str)
{
	std::string tmp(str);
	int k = 0;
	int i = 0;

	if (str == NULL || tmp.empty())
		return (true);
	for ( ; str[i] ; i++)
	{
		if (str[i] == 32 || (str[i] >= 9 && str[i] <=13))
			k++;
	}
	if (k == i)
		return (true);
	return (false);
}

void	replaceS1(std::ofstream &replace, std::string s1, std::string s2, std::string line)
{
	size_t pos;
	
	pos = line.find(s1);
	if (pos == std::string::npos)
	{
		replace << line;
		return ;
	}
	replace << line.substr(0, pos);
	replace << s2;
	replaceS1(replace, s1, s2, line.substr(pos + s1.length()));
}

int main(int argc, char **argv)
{
	std::ifstream file;
	std::ofstream replace;
	std::string	replaceName;
	std::string	tmp;

	if (argc != 4)
	{
		std::cout << "Wrong input! ./replace filename s1 s2" << std::endl;
		return (1);
	}
	if (checkInput(argv[1]))
	{
		std::cout << "Wrong Input" << std::endl;
		return (1);
	}
	file.open(argv[1]);
	if (file.fail())
	{
		std::cout << "We have a problem to open the file." << std::endl;
		return (1);
	}
	replaceName = std::string(argv[1]) + ".replace";
	replace.open((char *)replaceName.c_str());
	if (replace.fail())
	{
		std::cout << "We have a problem to open the file." << std::endl;
		return (1);
	}
	while (getline(file, tmp))
		replaceS1(replace, std::string(argv[2]), std::string(argv[3]), tmp + '\n');
}