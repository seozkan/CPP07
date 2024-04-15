/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozkan < seozkan@student.42kocaeli.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:05:02 by seozkan           #+#    #+#             */
/*   Updated: 2024/04/15 21:05:18 by seozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void iter(const T array[], size_t len, void func(const T &))
{
	size_t i = 0;
	while (i < len)
	{
		func(array[i]);
		i++;
	}
}

template <typename T>
void printData(const T &data)
{
	std::cout << data << " ";
}