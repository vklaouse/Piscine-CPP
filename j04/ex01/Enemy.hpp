// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Enemy.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/05 13:47:31 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/06 19:41:11 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <string>

class Enemy {

private:

	std::string _type;
	int _HitPoints;

public:

	Enemy();
	Enemy(int hp, std::string const & type);
	Enemy(Enemy const & src);
	virtual ~Enemy();

	std::string virtual getType() const;
	Enemy &operator=(Enemy const & rhs);
	int getHP() const;

	virtual void takeDamage(int damage);

};

#endif
