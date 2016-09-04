// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Victim.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/18 19:38:31 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/04 20:33:08 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Victim.hpp"

Victim::Victim() : _name("")
{
}

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << _name << " just died for no apparent reason !" << std::endl;
}

Victim & Victim::operator=(Victim const& rhs)
{
	this->_name = rhs._name;
	return (*this);
}

Victim::Victim(Victim const & src)
{
	*this = src;
}

void Victim::getPolymorphed() const
{
	std::cout << _name << " has been turned into a cute little sheep !" << std::endl;
}

std::string Victim::name() const
{
	return (_name);
}

std::ostream & operator<<(std::ostream & o, Victim const & rhs)
{
	o << "I'm " << rhs.name() << " and i like otters !" << std::endl;
	return (o);
}
