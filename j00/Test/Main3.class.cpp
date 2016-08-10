// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Main3.class.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/08 15:10:14 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/08 15:26:11 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Main3.class.hpp"

Main3::Main3(void){
	std::cout << "Constructeur" << std::endl;
	return;
}

Main3::~Main3(void){
	std::cout << "Destructeur" << std::endl;
	return;
}

void Main3::yolo(void)
{
	std::cout << "Bonjour" << std::endl;
	return;
}
