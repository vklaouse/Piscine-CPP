// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AWeapon.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/05 13:46:18 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/06 17:54:06 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "AWeapon.hpp"

AWeapon::AWeapon() : _name(""), _damage(0), _AP(0) 
{
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _damage(damage), _AP(apcost)
{
}

AWeapon::~AWeapon()
{
}

AWeapon::AWeapon(AWeapon const &src)
{
	*this = src;
}

AWeapon & AWeapon::operator=(AWeapon const &rhs)
{
	this->_name = rhs._name;
	this->_damage = rhs._damage;
	this->_AP = rhs._AP;
	return (*this);
}

std::string AWeapon::getName() const
{
	return (_name);
}

int AWeapon::getAPCost() const
{
	return (_AP);
}

int AWeapon::getDamage() const
{
	return (_damage);
}
