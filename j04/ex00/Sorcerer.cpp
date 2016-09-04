// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Sorcerer.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/18 19:38:12 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/04 20:30:13 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Sorcerer.hpp"

Sorcerer::Sorcerer() : _name(""), _title("")
{
}
Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << _name << ", " << _title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & src)
{
	*this = src;
}

Sorcerer & Sorcerer::operator=(Sorcerer const & rhs)
{
	this->_name = rhs._name;
	this->_title = rhs._title;
	return (*this);
}

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same !"<< std::endl;
}

void Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

std::string Sorcerer::name() const
{
	return (_name);
}

std::string Sorcerer::title() const
{
	return (_title);
}

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs)
{
	o << "I am " << rhs.name() << ", " << rhs.title() << ", and I like ponies !" << std::endl;
	return (o);
}
