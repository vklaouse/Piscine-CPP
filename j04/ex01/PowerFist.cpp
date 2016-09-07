// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PowerFist.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/05 13:47:06 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/07 15:33:56 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "PowerFist.hpp"
#include <iostream>

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(PowerFist const &src) : AWeapon(src)
{
	*this = src;
}

PowerFist::~PowerFist()
{
}

PowerFist &PowerFist::operator=(PowerFist const & rhs)
{
	AWeapon::operator=(rhs);
    return (*this);
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
