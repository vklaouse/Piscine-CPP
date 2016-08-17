// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/16 20:35:14 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/17 17:30:10 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <string>

class FragTrap{

public:

	FragTrap();
	FragTrap(FragTrap const & src);
	FragTrap(std::string Name);
	~FragTrap();

	FragTrap & operator=(FragTrap const & rhs);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const & target);

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
