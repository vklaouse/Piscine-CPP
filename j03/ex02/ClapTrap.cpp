// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/17 19:41:09 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/18 17:20:05 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

ClapTrap::ClapTrap() : _Hit_points(100), _Max_hit_points(100), _Energy_points(50), _Max_energy_points(50), _Level(1), _Melee_attack_damage(20), _Ranged_attack_damage(15), _Armor_damage_reduction(3), _Name("<no name>")
{
	std::cout << "Constructor CL4P-TP called !" << std::endl;
}

ClapTrap::ClapTrap(int Hit_points, int Energy_points, int Melee_attack_damage, int Ranged_attack_damage, int Armor_damage_reduction, std::string name) : _Hit_points(Hit_points), _Max_hit_points(Hit_points), _Energy_points(Energy_points), _Max_energy_points(Energy_points), _Level(1), _Melee_attack_damage(Melee_attack_damage), _Ranged_attack_damage(Ranged_attack_damage), _Armor_damage_reduction(Armor_damage_reduction), _Name(name)
{
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor CL4P-TP called !" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;
}

ClapTrap &ClapTrap::operator=(ClapTrap const & rhs)
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
	return (*this);
}

void ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "CL4P-TP " << _Name  << " attacks " << target << " at range, causing " << _Ranged_attack_damage << " points of damage ! "<< std::endl;
}

void ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "CL4P-TP " << _Name  << " attacks " << target << " at melee, causing " << _Melee_attack_damage << " points of damage ! " << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
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
	std::cout << "CL4P-TP " << _Name << " get " << amount << " points of damage ! ";
	std::cout << _Name << " have " << _Hit_points << " hit points !" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	_Hit_points = _Hit_points + amount;
	if (_Hit_points > _Max_hit_points)
		_Hit_points = _Max_hit_points;
	std::cout << "CL4P-TP " << _Name << " get " << amount << " points of repair ! ";
	std::cout << _Name << " have " << _Hit_points << " hit points !" << std::endl;
}
