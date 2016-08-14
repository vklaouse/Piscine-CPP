// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/14 05:44:28 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/14 07:24:42 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Fixed.class.hpp"

Fixed::Fixed(void)
{
	fixe = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
	fixe = src.fixe;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->fixe = rhs.fixe;
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixe);
}

void Fixed::setRawBits(int const raw)
{
	this->fixe = raw; 
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

const int Fixed::fractionalbits = 8;
