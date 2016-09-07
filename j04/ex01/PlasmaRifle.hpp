// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PlasmaRifle.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/05 13:46:45 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/07 15:33:27 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {

public:

	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const &src);
	~PlasmaRifle();

	PlasmaRifle &operator=(PlasmaRifle const & rhs);
	virtual void attack() const;
};

#endif
