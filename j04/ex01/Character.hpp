// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Character.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/05 13:48:41 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/07 15:36:50 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"
# include <iostream>

class Character {

private:

	std::string _name;
	int _AP;
	AWeapon *_weapon;
	

public:
	
	Character();
	Character(std::string const &name);
	Character(Character const &src);
	~Character();
	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	std::string virtual getName() const;	
	Character &operator=(Character const &rhs);
	const AWeapon *getWeapon() const;
	int getAP() const;

};

std::ostream & operator<<(std::ostream & o, Character const &rhs);

#endif
