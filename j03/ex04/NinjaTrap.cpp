// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NinjaTrap.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/18 18:00:16 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/18 18:54:34 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "NinjaTrap.hpp"
#include <iostream>
#include <string>

NinjaTrap::NinjaTrap() : ClapTrap(60, 120, 60, 5, 0, "<NO NAME>")
{
	std::cout << "NINJ4-TP " << _Name << " ready for FIIIIIIIIGHT !" << std::endl;
}

NinjaTrap::NinjaTrap(std::string Name): ClapTrap(60, 120, 60, 5, 0, Name) 
{
	std::cout << "NINJ4-TP " << _Name << " ready for FIIIIIIIIGHT !" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "Destructor NINJ4-TP Called." << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src) : ClapTrap(src)
{
	std::cout << "NINJ4-TP " << _Name << " clone ready for FIIIIIIIIGHT !" << std::endl;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const & rhs)
{
	ClapTrap::operator=(rhs);
	std::cout << "NINJ4-TP" << _Name << " receives new data" << std::endl;
	return (*this);
}

void NinjaTrap::ninjaShoebox(NinjaTrap const & i)
{
	std::cout << i._Name << " love One Piece NINJ4-TP !" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap const & i)
{
	std::cout << _Name << " like The Walking Dead FR4G-TP !" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap const & i)
{
	std::cout << _Name << " dont like your youtube channel SC4V-TP !" << std::endl;
}
