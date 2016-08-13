// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/14 00:52:46 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/14 01:42:01 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieHorde.hpp"
#include <iostream>

ZombieHorde::ZombieHorde(int n)
{
	int rand;
	int i = 0;
	std::string randname[5] = {"William Turner","Elizabeth Swann","Pintel","Joshamee Gibbs","Ragetti"};
	srand(time(NULL));
	this->object = new Zombie[n];
	this->N = n;
	while (i < n)
	{
		rand = std::rand() % 5;
		this->object[i].type = "Pirate";
		this->object[i].name = randname[rand];
		i++;
	}
}

ZombieHorde::~ZombieHorde()
{
	delete [] object;
	return;
}

void ZombieHorde::announce()
{
	int i = 0;

	while (i < N)
	{
		this->object[i].announce();
		i++;
	}

	return ;
}
