// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RadScorpion.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/05 13:48:15 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/06 19:48:32 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class RadScorpion : public Enemy{

public:

	RadScorpion();
	RadScorpion(RadScorpion const &src);
	~RadScorpion();

	RadScorpion &operator=(RadScorpion const &rhs);
	void takeDamage(int damage);
};

#endif
