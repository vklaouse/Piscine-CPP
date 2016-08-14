// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/14 05:44:22 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/14 07:05:33 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

class Fixed{

private:

	int fixe;
	static const int fractionalbits;

public:

	Fixed(void);
	Fixed(Fixed const & src);
	~Fixed(void);
	int getRawBits(void) const;
	void setRawBits(int const raw);

	Fixed & operator=(Fixed const & rhs);

};

#endif
