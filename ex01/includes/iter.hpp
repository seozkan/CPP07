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

template<typename T> void	iter(const T *array, int size, void function(const T &))
{
	for (int i = 0; i < size; i++)
		function(array[i]);
}

template<typename T> void	printData(const T &data)
{
	std::cout << data << " ";
}