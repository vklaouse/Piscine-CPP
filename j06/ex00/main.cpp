// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/12 19:35:06 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/13 17:49:12 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Convert.hpp"

int main(int ac, char **av)
{
	double D;
	int I;
	char C;
	float F;

	if (ac != 2)
	{
		std::cout << "Error, write only one argument please !" << std::endl;
		return (0);
	}
	Convert Conv(D = atof(av[1]));
	I = Conv;
	F = Conv;
	C = Conv;
	if (Conv.getValue() != Conv.getValue())
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
	}
	else if (std::numeric_limits<double>::infinity() == Conv.getValue())
	{	
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
	}
	else if (-std::numeric_limits<double>::infinity() == Conv.getValue())
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
	}
	else if ((32 <= C && C <= 126) || C == '\0')
	{
		if (C == '\0')
			std::cout << "char: '0'" << std::endl;
		else
			std::cout << "char: '" << C << "'" << std::endl;
		std::cout << "int: " << I << std::endl;
	}
	else
	{
		std::cout << "char: undisplayable" << std::endl;
		std::cout << "int: " << I << std::endl;
	}
	if (Conv.checkDecimal())
	{
		std::cout << "float: " << F << "f" << std::endl;
		std::cout << "double: " << D << std::endl;
	}
	else
	{
		std::cout << "float: " << F << ".0f" << std::endl;
		std::cout << "double: " << D << ".0" << std::endl;
	}
	return (0);
}
