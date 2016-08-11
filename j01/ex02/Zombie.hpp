// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/11 16:57:08 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/11 17:20:29 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie{

public:

	std::string name;
	std::string type;

	Zombie(void);
	~Zombie(void);

	void announce();

};

#endif
