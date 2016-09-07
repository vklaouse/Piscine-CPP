// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SuperMutant.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/05 13:47:49 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/07 15:50:52 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "SuperMutant.hpp"
#include <iostream>

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & src) : Enemy(src)
{
	*this = src;
}

SuperMutant::~SuperMutant()
{
}

SuperMutant &SuperMutant::operator=(SuperMutant const &rhs)
{
	Enemy::operator=(rhs);
	return (*this);
}

void SuperMutant::takeDamage(int damage)
{
	if (this->getHP() <= 0)
        return ;
	damage -= 3;
	if (damage > 0)
		Enemy::takeDamage(damage);
    if (this->getHP() <= 0)
		std::cout << "Aaargh..." << std::endl;
}
