// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/14 07:27:35 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/14 08:05:19 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

class {

private:

	int fixe;
	static const int fractionalbits;

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

#endif
