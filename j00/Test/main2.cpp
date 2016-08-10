// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main2.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/08 14:55:01 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/08 15:03:13 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

int main(void)
{
	char coucou[1];

	std::cout << "Bonjour, notes ton nom :";
	std::cin >> coucou;
	std::cout << "ton nom est ["<< coucou << "] !" << std::endl;
	return (0); 
}
