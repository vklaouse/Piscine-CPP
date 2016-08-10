// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   megaphone.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/08 15:40:22 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/08 17:09:00 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

int main(int ac, char ** av)
{
	int i;
	int j;

	i = 1;
	if (ac >= 2)
	{
		while (i < ac)
		{
			j = 0;
			while (av[i][j])
			{
				std::cout << (char)toupper(av[i][j]);
				j++;
			}
			if (j != 0 && i < ac)
				std::cout << " ";
			i++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE NOISE *" << std::endl;
	return (0);
}
