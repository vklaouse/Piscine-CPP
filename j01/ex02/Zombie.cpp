// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/11 16:56:59 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/14 00:20:16 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout << "<" + this->name + " (" + this->type + ")> Braiiiiiiinnnssss..."<< std::endl;
	return ;
}

Zombie::Zombie(std::string zombname, std::string zombtype)
{
	this->name = zombname;
	this->type = zombtype;
	this->announce();
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->name + " died starving in sea." << std::endl;
	return ;
}
