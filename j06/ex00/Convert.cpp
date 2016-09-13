// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Convert.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/12 19:34:43 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/13 17:40:39 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Convert.hpp"

Convert::Convert() : _Value(0)
{
}

Convert::Convert(double Value) : _Value(Value)
{
}

Convert::Convert(Convert const &src)
{
	*this = src;
}

Convert::~Convert()
{
}

Convert &Convert::operator=(Convert const &src)
{
	this->_Value = src._Value;
	return (*this);
}

Convert::operator int()
{
	return static_cast<int>(this->_Value);
}

Convert::operator float()
{
    return static_cast<float>(this->_Value);
}

Convert::operator char()
{
    return static_cast<char>(this->_Value);
}

double Convert::getValue()
{
	return (this->_Value);
}

void Convert::setValue(double Value)
{
	this->_Value = Value;
}

int Convert::checkDecimal()
{
	int i;
	double decimal;

	i = static_cast<double>(this->_Value);
	decimal = this->_Value - i;
	if (decimal != 0)
		return (1);
	return (0);
}
