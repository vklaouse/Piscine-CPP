// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Enemy.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/05 13:47:27 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/06 19:28:44 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Enemy.hpp"

Enemy::Enemy() : _type(""), _HitPoints(0)
{
}

Enemy::Enemy(int hp, std::string const & type) : _HitPoints(0), _type("")
{
}

Enemy::Enemy(Enemy const & src)
{
	*this = src;
}

Enemy::~Enemy()
{
}

Enemy &Enemy::operator=(Enemy const & rhs)
{
	this->_type = rhs._type;
	this->_HitPoints = rhs._HitPoints;
	return (*this);
}

std::string Enemy::getType() const
{
	return (_type);
}

int Enemy::getHP() const
{
	return (_HitPoints);
}

void Enemy::takeDamage(int damage)
{
	if (_HitPoints - damage <= 0)
		_HitPoints = 0;
	else
		_HitPoints = damage; 	
}
