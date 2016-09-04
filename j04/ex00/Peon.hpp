// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Peon.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/18 19:38:47 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/04 21:01:27 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim {

public:
	Peon();
	Peon(std::string name);
	Peon(Peon const & src);
	~Peon();

	Peon & operator=(Peon const & rhs);
	void getPolymorphed() const;

};

#endif
