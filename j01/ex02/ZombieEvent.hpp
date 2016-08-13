// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/11 16:57:26 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/14 00:19:16 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"
#include <string>

class ZombieEvent{

public:

	std::string type;

	ZombieEvent(void);
	~ZombieEvent(void);

	void setZombieType(void);
	Zombie* newZombie(std::string name);
	void randomChump(void);
};

#endif
