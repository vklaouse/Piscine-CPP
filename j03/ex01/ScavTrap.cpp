// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/17 18:12:48 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/17 19:22:06 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ScavTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap() : _Hit_points(100), _Max_hit_points(100), _Energy_points(50), _Max_energy_points(50), _Level(1), _Melee_attack_damage(20), _Ranged_attack_damage(15), _Armor_damage_reduction(3), _Name("<no name>")
{
	std::cout << "SC4V-TP " + _Name + " ready for a CHALLENGE ! " << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap Called." << std::endl;
}

ScavTrap::ScavTrap(std::string Name): _Hit_points(100), _Max_hit_points(100), _Energy_points(50), _Max_energy_points(50), _Level(1), _Melee_attack_damage(20), _Ranged_attack_damage(15), _Armor_damage_reduction(3), _Name(Name)
{
	std::cout << "SC4V-TP " + _Name + " ready for the CHALLENGE ! " << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	*this = src;
	std::cout << "SC4V-TP " + _Name + " clone ready for the CHALLENGE ! " << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const & rhs)
{
	this->_Hit_points = rhs._Hit_points;
	this->_Max_hit_points = rhs._Max_hit_points;
	this->_Energy_points = rhs._Energy_points;
	this->_Max_energy_points = rhs._Max_energy_points;
	this->_Level = rhs._Level;
	this->_Name = rhs._Name;
	this->_Melee_attack_damage = rhs._Melee_attack_damage;
	this->_Ranged_attack_damage = rhs._Ranged_attack_damage;
	this->_Armor_damage_reduction = rhs._Armor_damage_reduction;
	std::cout << "SC4V-TP " + _Name + " receives new data" << std::endl;
	return (*this);
}

void ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << _Name  << " attacks " << target << " at range, causing " << _Ranged_attack_damage << " points of damage ! "<< std::endl;
}

void ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << _Name  << " attacks " << target << " at melee, causing " << _Melee_attack_damage << " points of damage ! " << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (amount > _Armor_damage_reduction && _Hit_points != 0)
	{
		amount = amount - _Armor_damage_reduction;
		_Hit_points = _Hit_points - amount;
		if (_Hit_points < 0)
			_Hit_points = 0;
	}
	else
		amount = 0;
	std::cout << "SC4V-TP " << _Name << " get " << amount << " points of damage ! ";
	std::cout << _Name << " have " << _Hit_points << " hit points !" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	_Hit_points = _Hit_points + amount;
	if (_Hit_points > _Max_hit_points)
		_Hit_points = _Max_hit_points;
	std::cout << "SC4V-TP " << _Name << " get " << amount << " points of repair ! ";
	std::cout << _Name << " have " << _Hit_points << " hit points !" << std::endl;
}

void ScavTrap::challengeNewcomer(std::string const & target)
{
	int rand;
	std::string randattack[] = {"Not my arms challenge","Say anything challenge","Try to sing challenge", "Baby Food Challenge","Blindfolded make-up challenge"};
	rand = std::rand() % 5;
	if (_Energy_points > 0)
	{
		_Energy_points -= 25;
		std::cout << "SC4V-TP " << _Name << " use " << randattack[rand] << " and lose 25 points of energy ! ";
		std::cout << "SC4V-TP " << _Name << " have " << _Energy_points << " of energy !" << std::endl;
	}
	else
		std::cout << "SC4V-TP " << _Name << " is out of energy !" << std::endl;
}
