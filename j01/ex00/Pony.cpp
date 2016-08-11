// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/10 21:23:40 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/11 16:36:57 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Pony.hpp"
#include <iostream>

Pony::Pony(std::string Name, std::string Speed, std::string Food, std::string Size) : _Name(Name), _Speed(Speed), _Food(Food), _Size(Size){
	std::cout << "[Pony creator robot start]" << std::endl;
	std::cout << "Pony " << this->_Name << " is born !" << std::endl;
	std::cout << this->_Name << " can run" << this->_Speed << std::endl;
	std::cout << this->_Name << " like eat " << this->_Food << std::endl;
	std::cout << "His size is " << this->_Size << " !" <<std::endl;
	return;
}

Pony::~Pony(void){
	std::cout << "Pony " << this->_Name << " died !" << std::endl;
	return;
}

void Pony::jump(int height)
{
	std::cout << this->_Name  << " jump " << height << " meters" << std::endl;
}
