// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/16 20:35:09 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/18 17:53:14 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"
#include <iostream>
#include <string>

FragTrap::FragTrap() : ClapTrap(100, 100, 30, 20, 5, "<NO NAME>")
{
	std::cout << "FR4G-TP " << this->_Name << " ready for the WAAAAAARRR ! " << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor FragTrap Called." << std::endl;
}

FragTrap::FragTrap(std::string Name): ClapTrap(100, 100, 30, 20, 5, Name)
{
	std::cout << "FR4G-TP " << this->_Name << " ready for the WAAAAAARRR ! " << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src)
{
	std::cout << "FR4G-TP " << this->_Name << " clone ready for the WAAAAAARRR ! " << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const & rhs)
{
	ClapTrap::operator=(rhs);
	std::cout << "FR4G-TP " << this->_Name << " clone ready for the WAAAAAARRR ! " << std::endl;
	return (*this);
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int rand;
	std::string randattack[] = {"Chewing Punch","Chewing Rocket","Chewing Kick","Chewing Hammer","Chewing Balloon"};
	rand = std::rand() % 5;
	if (this->_Energy_points > 0)
	{
		_Energy_points -= 25;
		std::cout << "FR4G-TP " << this->_Name << " use " << randattack[rand] << " and lose 25 points of energy ! ";
		std::cout << "FR4G-TP " << this->_Name << " have " << this->_Energy_points << " of energy !" << std::endl;
	}
	else
		std::cout << "FR4G-TP " << this->_Name << " is out of energy !" << std::endl;
}
