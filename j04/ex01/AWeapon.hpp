// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AWeapon.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/05 13:46:27 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/06 17:54:20 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <string>

class AWeapon {

private:
	
	std::string _name;
	int _damage;
	int _AP;

public:
	AWeapon();
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon const &src);
	virtual ~AWeapon();

	AWeapon &operator=(AWeapon const &rhs);
	std::string virtual getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};

#endif
