// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/17 15:15:51 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/18 18:49:54 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"
#include "ScavTrap.hpp" 
#include "NinjaTrap.hpp"

int main()
{
	FragTrap F;
	FragTrap F2("Rick");
	FragTrap F3(F2);
	FragTrap F4 = F3;

	ScavTrap S;
    ScavTrap S2("EnjoyPhoenix");
    ScavTrap S3(S2);
    ScavTrap S4 = S3;

	NinjaTrap N;
    NinjaTrap N2("Raizou");
    NinjaTrap N3(N2);
    NinjaTrap N4 = N3;

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

	S.rangedAttack("Brick");
    S3.meleeAttack("Lilith");
    S2.meleeAttack("Mordecai");
    S4.rangedAttack("Roland");
    S2.meleeAttack("Lilith");
    S4.rangedAttack("Brick");
    S2.meleeAttack("Mordecai");
    S.meleeAttack("Lilith");
    S.beRepaired(130);
    S2.takeDamage(50);
    S2.takeDamage(145);
    S2.takeDamage(10);
    S2.beRepaired(10);
    S3.takeDamage(100);
    S3.beRepaired(90);
    S4.takeDamage(4);
    S4.challengeNewcomer("Lilith");
    S4.challengeNewcomer("Lilith");
    S4.challengeNewcomer("Mordecai");
    S4.challengeNewcomer("Brick");
    S.challengeNewcomer("Lilith");
    S4.challengeNewcomer("Brick");

	N.rangedAttack("Brick");
    N3.meleeAttack("Lilith");
    N2.meleeAttack("Mordecai");
    N4.rangedAttack("Roland");
    N2.meleeAttack("Lilith");
    N4.rangedAttack("Brick");
    N2.meleeAttack("Mordecai");
    N.meleeAttack("Lilith");
    N.beRepaired(130);
    N2.takeDamage(50);
    N2.takeDamage(145);
    N2.takeDamage(10);
    N2.beRepaired(10);
    N3.takeDamage(100);
    N3.beRepaired(90);
    N4.takeDamage(4);
	N2.ninjaShoebox(N);
	N2.ninjaShoebox(F3);
	N2.ninjaShoebox(S4);
    return (0);
}
