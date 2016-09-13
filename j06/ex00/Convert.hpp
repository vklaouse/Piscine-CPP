// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Convert.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/12 19:34:59 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/13 17:41:00 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <cstdlib>
#include <limits>

class Convert {

private:

	double _Value;

public:

	Convert();
	Convert(double const Value);
	Convert(Convert const &src);
	~Convert();

	Convert &operator=(Convert const &src);

	operator int();
	operator float();
	operator char();

	double getValue();
	void setValue(double Value);
	int checkDecimal();

};

#endif
