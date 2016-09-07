// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PlasmaRifle.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/05 13:46:50 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/07 15:33:17 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "PlasmaRifle.hpp"
#include <iostream>

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &src) : AWeapon(src)
{
	*this = src;
}

PlasmaRifle::~PlasmaRifle()
{
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const & rhs)
{
	AWeapon::operator=(rhs);
	return (*this);
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
