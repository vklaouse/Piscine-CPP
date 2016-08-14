// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/14 07:32:38 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/14 08:05:10 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.class.hpp"
#include <iostream>

Fixed::Fixed(void)
{
	Fixe = 0;
	std::cout << "Default constructor called" << std::endl
}

Fixed::Fixed(const int i);
{
	fixe = i;
	std::cout << "Int constructor called" <<std::endl;
}

Fixed::Fixed(const float j)
{
	fixe = j;
	std::cout << "Float constructor called" <<std::endl;
}

Fixed::Fixed(Fixed const & src)
{
	fixe = src.fixe;
	std::cout << "Copy constructor called" <<std::endl;
}

Fixed &Fixed::operator=(Fixed const & rhs)
{
	this->fixe = rhs.fixe;
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

}

float Fixed::toFloat() const
{

}
