// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SuperTrap.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/18 19:03:44 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/18 19:25:31 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include <string>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {

public:

	SuperTrap();
	SuperTrap(std::string Name);
	SuperTrap(SuperTrap const & src);
	~SuperTrap();

	SuperTrap &operator=(SuperTrap const & rhs);
};

#endif
