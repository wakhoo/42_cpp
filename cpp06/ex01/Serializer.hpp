/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 15:37:47 by chajeon           #+#    #+#             */
/*   Updated: 2025/05/12 12:06:15 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

typedef struct SData
{
	int a;
	double b;
} Data;

class Serializer
{
	private:
		Serializer(void);
		Serializer(const Serializer& copy);
		Serializer& operator=(const Serializer& copy);
		~Serializer(void);
	public:
		static long int serialize(Data *ptr);
		static Data* deserialize(long int raw);
};