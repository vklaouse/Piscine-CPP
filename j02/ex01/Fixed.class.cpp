// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/14 07:32:38 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/16 15:04:10 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.class.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void)
{
	this->_fixe = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i)
{
	this->_fixe = i << _fractionalbits;
	std::cout << "Int constructor called" <<std::endl;
}

Fixed::Fixed(const float j)
{
	this->_fixe = (int)(roundf(j * (1<<_fractionalbits)));
	std::cout << "Float constructor called" <<std::endl;
}

Fixed::Fixed(Fixed const & src)
{
	this->_fixe = src._fixe;
	std::cout << "Copy constructor called" <<std::endl;
}

Fixed &Fixed::operator=(Fixed const & rhs)
{
	this->_fixe = rhs._fixe;
	std::cout << "Assignation operator called" <<std::endl;
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" <<std::endl;
	return ;
}

int Fixed::toInt() const
{
	return (this->_fixe >> _fractionalbits);
}

float Fixed::toFloat() const
{
	float i = (float)(_fixe) /256;// (1<<fractionalbits);
	return (i);
}

std::ostream & operator <<(std::ostream &o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}

const int Fixed::_fractionalbits = 8;
