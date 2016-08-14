// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/14 03:57:48 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/14 04:40:13 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA{

private:

	Weapon &weapon;
	std::string name;

public:

	HumanA(std::string name, Weapon &weapon);
	void attack(void);
};

#endif
