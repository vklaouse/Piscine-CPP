// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/17 18:12:42 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/18 17:29:51 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{ 

public:

	ScavTrap();
	ScavTrap(std::string Name);
	ScavTrap(ScavTrap const & src);
	~ScavTrap();

	ScavTrap & operator=(ScavTrap const & rhs);

	void challengeNewcomer(std::string const & target);

};

#endif
