// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/14 03:43:15 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/14 04:42:18 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon{

private:
	std::string type;

public:

	Weapon(std::string type);
	const std::string &getType();
	void setType(std::string type);
	
};

#endif
