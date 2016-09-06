// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Character.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/05 13:48:46 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/06 20:27:07 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Character.hpp"

Character::Character() : _name(""), _AP(40), _weapon(NULL)
{
}

Character::Character(std::string const & name) : _name(name), _AP(40), _weapon(NULL)
{
}

Character::Character(Character const & src)
{
	*this = src;
}

Character::~Character()
{
}

Character &Character::operator=(Character const & rhs)
{
	this->_name = rhs._name;
	this->_AP = rhs._AP;
	this->_weapon = rhs._weapon;
	return (*this);
}

void Character::recoverAP()
{
	if (_AP <= 30)
		_AP += 10;
	else
		_AP = 40;
}

void Character::equip(AWeapon *weapon)
{
	this->_weapon = weapon;
}

void Character::attack(Enemy *enemy)
{
	if (_weapon != NULL)
	{
		std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
/*
		if (enemy->getHP() <= 0)
		delete [] enemy;*/
	}
}

std::string Character::getName() const
{
	return (_name);
}

int Character::getAP() const
{
	return (_AP);
}

const AWeapon *Character::getWeapon() const
{
	return (_weapon);
	}

std::ostream & operator<<(std::ostream & o, Character const &rhs)
{
	if (rhs.getWeapon())
		o << rhs.getName() << " has " << rhs.getAP() << " AP and wields a " << rhs.getWeapon().getName() << std::endl;
	else
		o << rhs.getName() << " has " << rhs.getAP() << " and is unarmed" << std::endl;
	return (o);
}
