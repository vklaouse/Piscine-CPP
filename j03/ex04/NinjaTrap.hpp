// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NinjaTrap.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/18 18:03:17 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/18 19:23:07 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include <string>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : virtual public ClapTrap{

public:

	NinjaTrap();
	NinjaTrap(std::string Name);
	NinjaTrap(NinjaTrap const & src);
	~NinjaTrap();

	NinjaTrap &operator=(NinjaTrap const & rhs);

	void ninjaShoebox(NinjaTrap const & i);
	void ninjaShoebox(ScavTrap const & i);
	void ninjaShoebox(FragTrap const & i);

};

#endif
