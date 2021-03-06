// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Victim.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/18 19:38:26 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/04 21:06:47 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>
#include <string>

class Victim {

private:

	std::string _name;

public:
    Victim();
	Victim(std::string _name);
    Victim(Victim const & src);
    ~Victim();

	std::string name() const;
	virtual void getPolymorphed() const;
    Victim & operator=(Victim const & rhs);
};

std::ostream & operator<<(std::ostream & o, Victim const & rhs);

#endif
