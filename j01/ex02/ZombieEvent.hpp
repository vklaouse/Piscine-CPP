// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/11 16:57:26 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/11 17:51:52 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent{

public:

	ZombieEvent(void);
	~ZombieEvent(void);

	void setZombieType();
	Zombie* newZombie(std::string name);
	void randomChump();
};

#endif
