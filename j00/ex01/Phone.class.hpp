// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Phone.class.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/09 15:01:06 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/09 16:13:41 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PHONE_CLASS_HPP
# define PHONE_CLASS_HPP

# include <iostream>
# include <string>


class Phone {

public:
	
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string postal_address;
	std::string email_address;
	std::string phone_number;
	std::string birthday_date;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;

	Phone(void);
	~Phone(void);

};

#endif
