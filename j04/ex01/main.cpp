// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/05 13:48:55 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/06 20:12:35 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "RadScorpion.hpp"
#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int main()
{
	Character* zaz = new Character(  "zaz"  );
	std::cout << *zaz;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->equip(pf);
	zaz->attack(b);
	std::cout << *zaz;
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	return 0; 
}
