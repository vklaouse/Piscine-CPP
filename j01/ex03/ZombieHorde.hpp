// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/14 00:42:42 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/14 01:34:22 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde{

public:

	int N;
	Zombie *object;

	ZombieHorde(int n);
	~ZombieHorde(void);

	void announce();

};

#endif
