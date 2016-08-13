// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/11 16:57:45 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/14 00:17:43 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieEvent.hpp"

int main()
{
	Zombie zombie("Hector Barbossa", "Corsairs");
	ZombieEvent *z = new ZombieEvent();
	z->setZombieType();
	Zombie *z2 = z->newZombie("Jack Sparow");
	z->randomChump();
	delete z;
	delete z2;
	return (0);
}
