// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SuperMutant.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/05 13:47:53 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/06 19:47:03 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant : public Enemy {

public:

	SuperMutant();
	SuperMutant(SuperMutant const & src);
	~SuperMutant();

	SuperMutant &operator=(SuperMutant const &rhs);
	void takeDamage(int damage);
};

#endif
