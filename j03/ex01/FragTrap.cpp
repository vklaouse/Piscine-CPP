// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/16 20:35:09 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/17 18:05:45 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"
#include <iostream>
#include <string>

FragTrap::FragTrap() : _Hit_points(100), _Max_hit_points(100), _Energy_points(100), _Max_energy_points(100), _Level(1), _Melee_attack_damage(30), _Ranged_attack_damage(20), _Armor_damage_reduction(5), _Name("<no name>")
{
	std::cout << "FR4G-TP " + _Name + " ready for the WAAAAAARRR ! " << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor FragTrap Called." << std::endl;
}

FragTrap::FragTrap(std::string Name): _Hit_points(100), _Max_hit_points(100), _Energy_points(100), _Max_energy_points(100), _Level(1), _Melee_attack_damage(30), _Ranged_attack_damage(20), _Armor_damage_reduction(5), _Name(Name)
{
	std::cout << "FR4G-TP " + _Name + " ready for the WAAAAAARRR ! " << std::endl;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
	std::cout << "FR4G-TP " + _Name + " clone ready for the WAAAAAARRR ! " << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const & rhs)
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
	std::cout << "FR4G-TP " + _Name + " receives new data" << std::endl;
	return (*this);
}

void FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << _Name  << " attacks " << target << " at range, causing " << _Ranged_attack_damage << " points of damage ! "<< std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << _Name  << " attacks " << target << " at melee, causing " << _Melee_attack_damage << " points of damage ! " << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
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
	std::cout << "FR4G-TP " << _Name << " get " << amount << " points of damage ! ";
	std::cout << _Name << " have " << _Hit_points << " hit points !" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	_Hit_points = _Hit_points + amount;
	if (_Hit_points > _Max_hit_points)
		_Hit_points = _Max_hit_points;
	std::cout << "FR4G-TP " << _Name << " get " << amount << " points of repair ! ";
	std::cout << _Name << " have " << _Hit_points << " hit points !" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int rand;
	std::string randattack[] = {"Chewing Punch","Chewing Rocket","Chewing Kick","Chewing Hammer","Chewing Balloon"};
	rand = std::rand() % 5;
	if (_Energy_points > 0)
	{
		_Energy_points -= 25;
		std::cout << "FR4G-TP " << _Name << " use " << randattack[rand] << " and lose 25 points of energy ! ";
		std::cout << "FR4G-TP " << _Name << " have " << _Energy_points << " of energy !" << std::endl;
	}
	else
		std::cout << "FR4G-TP " << _Name << " is out of energy !" << std::endl;
}
