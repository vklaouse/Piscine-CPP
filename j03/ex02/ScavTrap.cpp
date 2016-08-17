// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/17 18:12:48 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/17 20:39:11 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ScavTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap() : ClapTrap(100, 100, 50, 50, 1, 20, 15, 3, "<NO NAME>")
{
	std::cout << "SC4V-TP " + _Name + " ready for a CHALLENGE ! " << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap Called." << std::endl;
}

ScavTrap::ScavTrap(std::string Name): ClapTrap(100, 100, 50, 50, 1, 20, 15, 3, Name)
{
	std::cout << "SC4V-TP " + _Name + " ready for the CHALLENGE ! " << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src)
{
	std::cout << "SC4V-TP " + _Name + " clone ready for the CHALLENGE ! " << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const & rhs)
{
	ClapTrap::operator=(rhs);
	std::cout << "SC4V-TP " + _Name + " receives new data" << std::endl;
	return (*this);
}

void ScavTrap::challengeNewcomer(std::string const & target)
{
	int rand;
	std::string randattack[] = {"Not my arms challenge","Say anything challenge","Try to sing challenge", "Baby Food Challenge","Blindfolded make-up challenge"};
	rand = std::rand() % 5;
	if (_Energy_points > 0)
	{
		_Energy_points -= 25;
		std::cout << "SC4V-TP " << _Name << " use " << randattack[rand] << " and lose 25 points of energy ! ";
		std::cout << "SC4V-TP " << _Name << " have " << _Energy_points << " of energy !" << std::endl;
	}
	else
		std::cout << "SC4V-TP " << _Name << " is out of energy !" << std::endl;
}
