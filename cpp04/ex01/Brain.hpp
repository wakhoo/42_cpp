/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:57:40 by chajeon           #+#    #+#             */
/*   Updated: 2025/04/29 16:37:21 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
class Brain
{
	private:
		std::string _ideas[100];
	public:
		Brain(void);
		Brain(const Brain& copy);
		Brain& operator=(const Brain& copy);
		~Brain(void);
		void setIdea(int i, std::string idea);
		std::string getIdea(int i);
};