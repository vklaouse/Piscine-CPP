// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/17 18:12:42 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/17 19:16:54 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>

class ScavTrap {

public:

	ScavTrap();
	ScavTrap(std::string Name);
	ScavTrap(ScavTrap const & src);
	~ScavTrap();

	ScavTrap & operator=(ScavTrap const & rhs);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer(std::string const & target);

private:

	int _Hit_points;
	unsigned int _Max_hit_points;
	unsigned int _Energy_points;
	unsigned int _Max_energy_points;
	unsigned int _Level;
	std::string _Name;
	unsigned int _Melee_attack_damage;
	unsigned int _Ranged_attack_damage;
	unsigned int _Armor_damage_reduction;

};

#endif
