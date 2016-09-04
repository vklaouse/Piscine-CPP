// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Peon.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/18 19:38:42 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/04 21:03:02 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Peon.hpp"
#include <iostream>

Peon::Peon() : Victim("")
{
}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog Zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(Peon const & src) : Victim(src)
{
	*this = src;
}

Peon &Peon::operator=(Peon const&rhs)
{
	Victim::operator=(rhs);
	return (*this);
}

void Peon::getPolymorphed() const
{
	std::cout << name() << " has been turned into a pink pony !" << std::endl;
}
