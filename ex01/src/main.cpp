/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozkan < seozkan@student.42kocaeli.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:21:12 by seozkan           #+#    #+#             */
/*   Updated: 2024/04/15 21:21:14 by seozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iter.hpp>

int	main( void )
{
	int	intArray[5] = {42, 41, 40, 39, 38};
	std::string	stringArray[5] = {"42", "seozkan", "cpp07", "masa", "ersin"};
	float	floatArray[3] = {42.42, 69.69, 42.69};

	std::cout << "Result of iter the int array:" << std::endl;
	::iter<int>(intArray, 5, ::printData);

	std::cout << std::endl << std::endl << "Result of iter the string array" << std::endl;
	::iter<std::string>(stringArray, 5, ::printData);

	std::cout<< std::endl << std::endl << "Result of iter the float array" << std::endl;
	::iter<float>(floatArray, 3, ::printData);
	std::cout << std::endl;
}