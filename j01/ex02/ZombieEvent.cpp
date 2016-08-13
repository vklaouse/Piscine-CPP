// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/11 16:57:34 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/14 00:19:41 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <string>
#include "ZombieEvent.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

void ZombieEvent::setZombieType()
{
	this->type = "Pirates";
	return ;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	Zombie *z2 = new Zombie(name, this->type);
	return (z2);
}

void ZombieEvent::randomChump()
{
	std::string randname[5] = {"William Turner","Elizabeth Swann","Pintel","Joshamee Gibbs","Ragetti"};
	std::srand(std::time(0));
	int rand = std::rand();
	Zombie caraibe(randname[rand % 5], this->type);
	return ;
}

ZombieEvent::ZombieEvent()
{
	return ;
}

ZombieEvent::~ZombieEvent()
{
	return ;
}
