// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/17 18:12:42 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/17 20:39:35 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>

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
