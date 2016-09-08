// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Squad.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/07 16:27:43 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/08 17:33:57 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Squad.hpp"
#include <iostream>

Squad::Squad() : _ISpaceMarine(new ISpaceMarine*[42]), _Units(0), _MoveUnits(42)
{
}

Squad::Squad(Squad const &src) : _ISpaceMarine(new ISpaceMarine*[src.getCount()]), _MoveUnits(src.getCount())
{
	int i = 0;
	
	while (i < src.getCount())
	{
		_ISpaceMarine[i] = src.getUnit(i)->clone();
		i++;
	}
}

Squad::~Squad()
{
	int i = 0;

	while (i < this->_Units)
    {
		delete _ISpaceMarine[i];
		i++;
    }
	delete [] _ISpaceMarine;
}

Squad &Squad::operator=(Squad const &rhs)
{
	int i = 0;
	while (i < this->_Units)
	{
		delete _ISpaceMarine[i];
		i++;
	}
	this->_Units = 0;
	i = 0;
	while (i < rhs._Units)
	{
		this->push(rhs.getUnit(i));
		i++;
	}
	return (*this);
}

int Squad::getCount() const
{
	return (_Units);
}

ISpaceMarine *Squad::getUnit(int unit) const
{
	if (unit < _Units)
		return (_ISpaceMarine[unit]);
	else
		return (NULL);
}

int Squad::push(ISpaceMarine *_ISpaceMarine)
{
	ISpaceMarine **tmp;

	if (_Units < _MoveUnits)
		_ISpaceMarine[_Units++] = _ISpaceMarine; //pk tu fonctionnes pas ?
	else
	{
		tmp = new ISpaceMarine*[++_MoveUnits];
		int i = 0;
		while (i < _MoveUnits - 1)
		{
			tmp[i] = &_ISpaceMarine[i];
			i++;
		}
		tmp[_Units++] = _ISpaceMarine;
		delete[] _ISpaceMarine;
		_ISpaceMarine = *tmp;
	}
	return (_Units);
}
