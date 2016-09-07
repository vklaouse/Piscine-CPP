// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PowerFist.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/05 13:47:13 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/07 15:34:11 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon {

public:

	PowerFist();
	PowerFist(PowerFist const &src);
	~PowerFist();

	PowerFist &operator=(PowerFist const &rhs);
	void attack() const;

};

#endif
