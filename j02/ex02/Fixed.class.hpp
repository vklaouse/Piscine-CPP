// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/16 15:13:37 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/16 20:07:33 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifnedf FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

class Fixed {

private:

	int _fixe;
	static const int _fractionalbits;

public:

	Fixed();
	Fixed(int const n);
	Fixed(Fixed const & src);
	~Fixed();
	
	Fixed & operator=(Fixed const & rhs);

	bool operator>(Fixed const & rhs) const;
	bool operator>=(Fixed const & rhs) const;
    bool operator<(Fixed const & rhs) const;
    bool operator<=(Fixed const & rhs) const;
    bool operator==(Fixed const & rhs) const;
    bool operator!=(Fixed const & rhs) const;

	Fixed operator+(Fixed const & rhs) const;
	Fixed operator-(Fixed const & rhs) const;
	Fixed operator*(Fixed const & rhs) const;
	Fixed operator/(Fixed const & rhs) const;

	Fixed & operator--();
	Fixed & operator++();
	Fixed operator++(int);
	Fixed operator--(int);

	static Fixed &min(Fixed &value1, Fixed &value2);
	static Fixed &max(Fixed &value1, Fixed &value2);
	static Fixed const&min(Fixed const &value1, Fixed  const &value2);
	static Fixed const&max(Fixed const &value1, Fixed const &value2);

};

#endif
