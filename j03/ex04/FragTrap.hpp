// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/16 20:35:14 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/18 19:23:18 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap : virtual public ClapTrap{

public:

	FragTrap();
	FragTrap(FragTrap const & src);
	FragTrap(std::string Name);
	~FragTrap();

	FragTrap & operator=(FragTrap const & rhs);

	void vaulthunter_dot_exe(std::string const & target);

};

#endif
