// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Squad.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/07 16:27:18 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/08 17:05:56 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"

class Squad : public ISquad {

private:

	int _Units;
	ISpaceMarine **_ISpaceMarine;
	int _MoveUnits;

public:

	Squad();
	Squad(Squad const &src);
	virtual ~Squad();

	Squad &operator=(Squad const &rhs);
	int getCount() const;
	ISpaceMarine *getUnit(int) const;
	int push(ISpaceMarine *);

};

#endif
