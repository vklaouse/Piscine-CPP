// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/17 15:15:51 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/17 17:40:59 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"
#include <string>
#include <iostream>

int main()
{
	FragTrap F;
	FragTrap F2("Rick");
	FragTrap F3(F2);
	FragTrap F4 = F3;

	F.rangedAttack("Brick");
	F3.meleeAttack("Lilith");
	F2.meleeAttack("Mordecai");
	F4.rangedAttack("Roland");
	F2.meleeAttack("Lilith");
	F4.rangedAttack("Brick");
	F2.meleeAttack("Mordecai");
	F.meleeAttack("Lilith");
	F.beRepaired(130);
	F2.takeDamage(50);
	F2.takeDamage(145);
	F2.takeDamage(10);
	F2.beRepaired(10);
	F3.takeDamage(100);
	F3.beRepaired(90);
	F4.takeDamage(4);
	F4.vaulthunter_dot_exe("Lilith");
	F4.vaulthunter_dot_exe("Lilith");
	F4.vaulthunter_dot_exe("Mordecai");
	F4.vaulthunter_dot_exe("Brick");
	F.vaulthunter_dot_exe("Lilith");
	F4.vaulthunter_dot_exe("Brick");
	return (0);
}
