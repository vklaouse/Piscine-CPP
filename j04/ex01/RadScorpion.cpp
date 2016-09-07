// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RadScorpion.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/05 13:48:23 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/07 15:48:21 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "RadScorpion.hpp"
#include <iostream>

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const & src) : Enemy(src)
{
    *this = src;
}

RadScorpion::~RadScorpion()
{
}

RadScorpion &RadScorpion::operator=(RadScorpion const &rhs)
{
	Enemy::operator=(rhs);
    return (*this);
}

void RadScorpion::takeDamage(int damage)
{
    if (this->getHP() <= 0)
		return ;
	Enemy::takeDamage(damage);
	if (this->getHP() <= 0)
		std::cout << "* SPROTCH *" <<std::endl;
}
