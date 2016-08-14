// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/14 03:58:12 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/14 04:39:51 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB{

private:
	Weapon *weapon;
	std::string name;

public:

	HumanB(std::string name);
	void attack(void);
	void setWeapon(Weapon &weapon);

};

#endif
