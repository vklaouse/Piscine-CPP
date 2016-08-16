// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/14 07:27:35 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/16 15:04:18 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>

class Fixed{

private:

	int _fixe;
	static const int _fractionalbits;

public:

	Fixed();
	Fixed(Fixed const & src);
	Fixed(const int i);
	Fixed(const float j);
	~Fixed(void);
	float toFloat(void) const;
	int toInt(void) const;

	Fixed &operator=(Fixed const & rhs);

};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif
