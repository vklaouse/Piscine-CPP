// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Sorcerer.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/18 19:38:05 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/04 20:33:58 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <string>
# include <iostream>
#include "Victim.hpp"

class Sorcerer {

private:
	std::string _name;
	std::string _title;

public:
	Sorcerer();
	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const & src);
	~Sorcerer();

	std::string name() const;
	std::string title() const;
	void polymorph(Victim const &victim) const;
    Sorcerer & operator=(Sorcerer const & rhs);
};

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs);

#endif
