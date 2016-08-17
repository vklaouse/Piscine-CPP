// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/17 19:41:16 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/17 20:18:40 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap {

protected:

	int _Hit_points;
	unsigned int _Max_hit_points;
	unsigned int _Energy_points;
	unsigned int _Max_energy_points;
	unsigned int _Level;
	std::string _Name;
	unsigned int _Melee_attack_damage;
	unsigned int _Ranged_attack_damage;
	unsigned int _Armor_damage_reduction;

public:

	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & src);
	~ClapTrap();

	ClapTrap &operator=(ClapTrap const & rhs);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

};

#endif
